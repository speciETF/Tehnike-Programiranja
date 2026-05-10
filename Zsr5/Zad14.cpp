
#include <cmath>

#include <iostream>


template <typename Tip>
int Parni(Tip p1, Tip p2){

    int brojac = 0;


    while(p1!=p2){
    if(std::abs(*p1)%2==0){
    brojac++;

    }
    p1++;

    }
   return brojac;

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

    int rezultat = Parni(niz, niz + n);

    std::cout << "Broj parnih brojeva: " << rezultat;

    return 0;
}
