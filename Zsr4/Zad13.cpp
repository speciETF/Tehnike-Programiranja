#include <iostream>



void RazdvojiCifre(int n, int &parni, int &neparni) {
    parni = 0;
    neparni = 0;
        n = std::abs(n);

    int mnozilacParni = 1;
    int mnozilacNeparni = 1;



    while (n > 0) {
        int cifra = n % 10;
        if (cifra % 2 == 0) {
            parni = cifra * mnozilacParni + parni;
            mnozilacParni *= 10;
        } else {
            neparni = cifra * mnozilacNeparni + neparni;
            mnozilacNeparni *= 10;
        }
        n /= 10;
    }
}

int main() {
    int broj, parni, neparni;
    std::cout << "Unesite broj: ";
     std::cin >> broj;

    RazdvojiCifre(broj, parni, neparni);

     std::cout << "Broj parnih cifara: " << parni <<  std::endl;
     std::cout << "Broj neparnih cifara: " << neparni <<  std::endl;

    return 0;
}



