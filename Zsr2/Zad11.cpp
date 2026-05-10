
#include <iostream>
#include<vector>

std::vector<double> ObrnutiElementi(double niz[], int n) {
    std::vector<double> novi;

    for (int i = n - 1; i >= 0; i--) {
        novi.push_back(niz[i]);
    }

    return novi;
}

int main() {
    const int kapacitet = 10;
    double niz[kapacitet];

    std::cout << "Unesite " << kapacitet << " realnih brojeva:\n";
    for (int i = 0; i < kapacitet; i++) {
        std::cin >> niz[i];
    }


    std::vector<double> vektorObrnuti = ObrnutiElementi(niz, kapacitet);

    std::cout << "Vektor sa obrnutim elementima: ";
    for (double x : vektorObrnuti) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}
