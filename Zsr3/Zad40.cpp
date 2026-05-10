#include <iostream>
#include <string>

int main() {
    std::string tekst;
    std::cout << "Unesite recenicu: ";
    std::getline(std::cin, tekst);

    int kraj = tekst.length() - 1;

    // Preskoèi razmake na kraju
    while(kraj >= 0 && tekst[kraj] == ' ') {
        kraj--;
    }

    if(kraj < 0) { // prazna reèenica
        std::cout << "Nema rijeci!" << std::endl;
        return 0;
    }

    // poèetak posljednje rijeèi
    int pocetak = kraj;
    while(pocetak >= 0 && tekst[pocetak] != ' ') {
        pocetak--;
    }
    pocetak++; // prvi znak rijeèi

    //Ruèno kopiramo znak po znak u novi string
    std::string rijec = "";
    for(int i = pocetak; i <= kraj; i++) {
        rijec += tekst[i]; // dodajemo znak po znak
    }

    std::cout << "Posljednja rijec reèenice je: " << rijec << std::endl;

    return 0;
}
