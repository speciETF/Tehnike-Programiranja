#include <iostream>
#include <string>

void AnalizaStringa(std::string tekst, int &velika, int &mala, int &ostali) {
    velika = 0;
    mala = 0;
    ostali = 0;
    for (int i = 0; i < tekst.size(); i++) {
        if (tekst[i] >= 'A' && tekst[i] <= 'Z') {
            velika++;
        }
        else if (tekst[i] >= 'a' && tekst[i] <= 'z') {
            mala++;
        }
        else {
            ostali++;
        }
    }
}

int main() {
    std::string s = "Hello World! 123";
    int velika, mala, ostali;
    AnalizaStringa(s, velika, mala, ostali);
    std::cout << "Velika: " << velika << std::endl;
    std::cout << "Mala:   " << mala << std::endl;
    std::cout << "Ostali: " << ostali << std::endl;
    return 0;
}
