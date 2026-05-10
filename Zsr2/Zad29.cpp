#include <iostream>
#include <vector>

//TEMP NAM JE POTREBAN DA NA KRAJU MOŽEMO STAVITI NEIZMJENJENI BROJ
std::vector<int> VeciOd(std::vector<int> v, int n){
    std::vector<int> novi;

    for(int i = 0; i < v.size(); i++){
        int broj = v.at(i);   // èuvamo originalni element
        int suma = 0;
        int temp = broj;      // koristimo temp za sumu cifara
        while(temp > 0){
            suma += temp % 10;
            temp /= 10;
        }
        if(suma > n){
            novi.push_back(broj);  // ubacujemo originalni broj, ne temp
        }
    }

    return novi;
}

int main() {
    int br, k;
    std::cout << "Unesite broj elemenata vektora: ";
    std::cin >> br;

    std::vector<int> vektor;
    for (int i = 0; i < br; i++) {
        int x;
        std::cout << "Unesite element " << i + 1 << ": ";
        std::cin >> x;
        vektor.push_back(x);
    }

    std::cout << "Unesite broj za poreðenje sa sumom cifara: ";
    std::cin >> k;

    std::vector<int> rezultat = VeciOd(vektor, k);

    if (rezultat.empty()) {
        std::cout << "Nema elemenata èija je suma cifara veæa od " << k << ".\n";
    } else {
        std::cout << "Elementi èija je suma cifara veæa od " << k << ": ";
        for (int i = 0; i < rezultat.size(); i++) {
            std::cout << rezultat.at(i) << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
