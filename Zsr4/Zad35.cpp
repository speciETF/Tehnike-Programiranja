#include <iostream>
#include <string>

void Razmaci(std::string &tekst, int n) {
    std::string novi = "";
    for (int i = 0; i < tekst.length(); i++) {
        novi += tekst[i];
        for (int j = 0; j < n; j++) {
            novi += ' ';
        }
    }
    tekst = novi;
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    Razmaci(s, 1);
    std::cout << s << std::endl;
    return 0;
}
