#include <iostream>
#include <string>

void ROT13(std::string &tekst) {
    for (int i = 0; i < tekst.size(); i++) {
        char c = tekst[i]; // c jeste indekst od teksta ali je ovdje pojednostavljen
        if (c >= 'A' && c <= 'Z') {
            c = c + 13;
            if (c > 'Z') c = c - 26;
            tekst[i] = c;
        }
        else if (c >= 'a' && c <= 'z') {
            c = c + 13;
            if (c > 'z') c = c - 26;
            tekst[i] = c;
        }
    }
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    ROT13(s);
    std::cout << s << std::endl;
    return 0;
}
