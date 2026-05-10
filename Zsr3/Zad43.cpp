 #include <iostream>
#include <string>

int BrojRijeci(const std::string& recenica){
    int brojac = 0;
    bool uRijeci = false;

    for(char c : recenica){
        if(c != ' '){
            uRijeci = true;
        } else if (c==' ') {
            if(uRijeci){
                brojac++;
                uRijeci = false;
            }
        }
    }

    if(uRijeci) brojac++;

    return brojac;
}



int main() {
    std::string s;

    std::cout << "Unesite recenicu: ";
    std::getline(std::cin, s);

    int broj = BrojRijeci(s);

    std::cout << "Broj rijeci: " << broj << std::endl;

    return 0;
}
