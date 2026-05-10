#include <iostream>
#include <stdexcept>

bool jeProst(int x) {
    if(x < 2) return false;
    for(int j = 2; j*j <= x; j++) {
        if(x % j == 0) return false;
    }
    return true;
}

int* PrviProstiBrojevi(int n) {
    if(n <= 0) throw std::runtime_error("Neispravan broj n!");

    int* niz = new int[n];

    int i = 0;
    for(int broj = 2; i <n; broj++) {
        if(jeProst(broj)) {
            niz[i] = broj;
            i++;
        }
    }

    return niz;
}

int main() {
    try {
        int n;
        std::cout << "Unesite n: ";
        std::cin >> n;

        int* prosti = PrviProstiBrojevi(n);

        std::cout << "Prvih " << n << " prostih brojeva: ";
        for(int i = 0; i < n; i++) {
            std::cout << prosti[i] << " ";
        }
        std::cout << std::endl;

        delete[] prosti; // oslobaðanje memorije

    } catch(const std::exception &e) {
        std::cout << "Izuzetak: " << e.what() << std::endl;
    }

    return 0;
}
