#include <iostream>
#include <string>

void AnalizaStringa(std::string tekst, int &slova, int &cifre, int &ostali) {
    slova = 0;
    cifre = 0;
    ostali = 0;
    for (int i = 0; i < tekst.size(); i++) {
        if ((tekst[i] >= 'A' && tekst[i] <= 'Z') || (tekst[i] >= 'a' && tekst[i] <= 'z')) {
            slova++;
        }
        else if (tekst[i] >= '0' && tekst[i] <= '9') {
            cifre++;
        }
        else {
            ostali++;
        }
    }
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    int slova, cifre, ostali;
    AnalizaStringa(s, slova, cifre, ostali);
    std::cout << "Slova:  " << slova << std::endl;
    std::cout << "Cifre:  " << cifre << std::endl;
    std::cout << "Ostali: " << ostali << std::endl;
    return 0;
}
