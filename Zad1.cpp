#include <iostream>
#include <string>
#include <vector>

struct Roba {
    std::string naziv;
    int broj_skladista;
    int kolicina_robe;
    int minimalna_kolicina;
    double cijena;
    std::string dobavljac;
};

void Izvjestaj(const Roba r) {
    std::cout << "Naziv: " << r.naziv << "\n";
    std::cout << "Broj skladista: " << r.broj_skladista << "\n";
    std::cout << "Kolicina u skladistu: " << r.kolicina_robe << "\n";
    if (r.kolicina_robe <= r.minimalna_kolicina) {
        std::cout << "Dobavljac: " << r.dobavljac << "\n";
        std::cout << ">>> Treba pozvati dobavljaca za efikasne zalihe!\n";
    }
    std::cout << "-------------------------\n";
}

int main() {
    int n;
    std::cout << "Unesite broj artikala: ";
    std::cin >> n;

    std::vector<Roba> skladiste(n);

    for (int i = 0; i < n; i++) {
        std::cout << "\n-- Artikal " << i + 1 << " --\n";
        std::cout << "Unesite naziv: ";
        std::cin >> skladiste[i].naziv;
        std::cout << "Unesite broj skladista: ";
        std::cin >> skladiste[i].broj_skladista;
        std::cout << "Unesite kolicinu robe: ";
        std::cin >> skladiste[i].kolicina_robe;
        std::cout << "Unesite minimalnu kolicinu: ";
        std::cin >> skladiste[i].minimalna_kolicina;
        std::cout << "Unesite cijenu: ";
        std::cin >> skladiste[i].cijena;
        std::cout << "Unesite ime dobavljaca: ";
        std::cin >> skladiste[i].dobavljac;
    }

    std::cout << "\n===== IZVJESTAJ =====\n";
    for (int i = 0; i < n; i++) {
        Izvjestaj(skladiste[i]);
    }

    return 0;
}
