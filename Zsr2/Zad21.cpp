

#include <iostream>
#include <vector>

std::vector<int> CifreElemenata(std::vector<int> v){

    std::vector<int> novi;
    int n;
    int cifra;
    int minimum;
    int priv;
    for(int i = 0; i < v.size(); i++){
        n = v.at(i);
        priv=n%10;
        while(n > 0){
           cifra=n%10;
            n /= 10;
            if(priv<cifra){
                minimum=priv;

            }
            else{
                minimum=cifra;
            }
             priv=cifra;
        }

        novi.push_back(minimum);    }

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

    std::cout << "Broj najmanjih cifara elemenata je: ";
    for(int i = 0; i < rezultat.size(); i++){
        std::cout << rezultat.at(i) << " ";
    }

    return 0;
}
