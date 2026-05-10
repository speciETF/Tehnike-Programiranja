  #include <iostream>
#include <string>

std::string ukloniRazmake(const std::string& recenica) {
    std::string rezultat;
    bool bioRazmak = false;

    for (char c : recenica) {
        if (c == ' ') {
            // Ako rezultat nije prazan i prethodni znak nije bio razmak
            if (!rezultat.empty() && !bioRazmak) {
                rezultat += ' ';
                bioRazmak = true; // oznaèavamo da smo stavili razmak
            }
        } else {
            rezultat += c;    // dodajemo znak
            bioRazmak = false; // resetujemo zastavicu
        }
    }

    // uklanjanje razmaka na kraju, ako postoji
    if (!rezultat.empty() && rezultat.back() == ' ')
        rezultat.pop_back();

    return rezultat;
}

int main() {
    std::string s;
    std::cout << "Unesite recenicu: ";
    std::getline(std::cin, s);

    std::string bezRazmaka = ukloniRazmake(s);
    std::cout << "Recenica bez suvisnih razmaka: \"" << bezRazmaka << "\"" << std::endl;

    return 0;
}
