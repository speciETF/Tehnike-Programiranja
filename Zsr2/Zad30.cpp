#include <iostream>
#include <vector>

void OdstraniIsteParnosti(std::vector<int> &v) {
    int i = 0;
    while (i < v.size()) {
        int broj = v[i];
        int temp = broj;
        bool sveParne = true;
        bool sveNeparne = true;

        if (broj == 0) { // 0 je parna cifra
            sveNeparne = false;
        }

        while (temp > 0) {
            int cifra = temp % 10;
            if (cifra % 2 == 0) sveNeparne = false;
            else sveParne = false;
            temp /= 10;
        }

        if (sveParne || sveNeparne) {
            // "manual erase" – pomjerimo sve elemente lijevo
            for (int j = i; j < v.size() - 1; j++) {
                v[j] = v[j+1];
            }
            v.pop_back(); // smanjimo velièinu vektora
        } else {
            i++; // idemo na sljedeæi element samo ako nismo brisali
        }
    }
}

int main() {
    int n;
    std::cout << "Unesite broj elemenata vektora: ";
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Unesite element " << i+1 << ": ";
        std::cin >> v[i];
    }

    OdstraniIsteParnosti(v);

    std::cout << "Vektor nakon odstranjivanja: ";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
