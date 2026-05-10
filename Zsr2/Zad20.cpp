


#include <iostream>
#include <vector>

std::vector<int> CifreElemenata(std::vector<int> v){

    std::vector<int> novi;
    int n;
    int suma = 0;
    int cifra;

    for(int i = 0; i < v.size(); i++){
        n = v.at(i);

        if(n == 0) suma = 1;

        while(n > 0){
            cifra=n%10;
            suma+=cifra;
            n /= 10;

        }

        novi.push_back(suma);
        suma = 0;
    }

    return novi;
}

int main() {
    int n;
    std::cout << "Unesite broj elemenata: ";
    std::cin >> n;

    std::vector<int> vek;

    for(int i = 0; i < n; i++){
        int x;
        std::cout << "Unesite " << i+1 << ". element: ";
        std::cin >> x;
        vek.push_back(x);
    }

    std::vector<int> rezultat = CifreElemenata(vek);

    std::cout << "Suma cifara elemenata je: ";
    for(int i = 0; i < rezultat.size(); i++){
        std::cout << rezultat.at(i) << " ";
    }

    return 0;
}
