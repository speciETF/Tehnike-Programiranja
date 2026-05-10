#include <iostream>
#include <vector>

std::vector<int> CifreElemenata(std::vector<int> v){

    std::vector<int> novi;
    int n;
    int cifra;
    int minimum;
    int priv;

    for(int i = 0; i < v.size(); i++){
        n = std::abs(v.at(i));  // uzmemo apsolutnu vrijednost za siguran rad
        if(n == 0){             // poseban sluèaj ako je broj 0
            minimum = 0;
        } else {
            priv = n % 10;      // inicijaliziramo prvom cifrom
            minimum = priv;

            while(n > 0){
                cifra = n % 10;
                if(cifra < minimum){
                    minimum = cifra;
                }
                priv = cifra;
                n /= 10;
            }
        }

        novi.push_back(minimum);
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

    std::cout << "Najmanje cifre unesenih elemenata su: ";
    for(int i = 0; i < rezultat.size(); i++){
        std::cout << rezultat.at(i) << " ";
    }

    return 0;
}
