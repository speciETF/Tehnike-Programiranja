#include <iostream>
#include <string>
#include <map>

std::string Monoalfabetsko_Sifranje(std::string tekst, std::map<char, char> sifarnik) {
    std::string novi;
    for (int i = 0; i < tekst.size(); i++) {
        char c = tekst[i];
        if (sifarnik.count(c)) {
            novi += sifarnik[c];
        } else {
            novi += c;
        }
    }
    return novi;
}

int main() {
    std::map<char, char> kljuc;
    kljuc['a'] = 'x';
    kljuc['b'] = 'c';
    kljuc['c'] = 'a';

    std::string tekst;
    std::cout << "Unesite tekst: ";
    std::cin >> tekst;

    std::string sifrat = Monoalfabetsko_Sifranje(tekst, kljuc);
    std::cout << "Sifrirani tekst: " << sifrat << "\n";

    return 0;
}
