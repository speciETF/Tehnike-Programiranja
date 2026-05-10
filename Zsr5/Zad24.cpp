#include <iostream>
template<typename Tip>

bool Simetricni(Tip pocetak, Tip kraj){


    Tip it1=pocetak;
    Tip it2=kraj;
    it2--;

    while(it1<it2){
    if(*it1!=*it2){
    return false;
    }
    it1++;
    it2--;


    }

    return true;



}




int main() {
    int n;
    std::cout << "Koliko elemenata: ";
    std::cin >> n;

    int niz[100];

    std::cout << "Unesite elemente: ";
    for(int i = 0; i < n; i++) {
        std::cin >> niz[i];
    }

    bool rezultat = Simetricni(niz, niz + n);

    std::cout << "Da li je simetrican " << std::boolalpha<<rezultat;

    return 0;
}
