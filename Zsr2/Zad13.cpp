#include <iostream>
#include <vector>


bool ImaStepenDva(const std::vector<int>& v) {

 int n;
     for (int i = 0; i < v.size(); i++) {
          if (v.at(i) <= 0) continue;

        n=v.at(i);



            while (n%2==0){ //ne moramo komadati broj samo ga dijelimo sa 2 npr 64 pa 32 pa 16 pa 4 pa 2 pa 1 Sve dok je djeljiv

                n/=2;
            }
        if (n == 1) return true; //kada je 1 onda je true
     }

 return false;
}



int main() {
    int n;
    std::cout << "Unesite koliko brojeva zelite: ";
    std::cin >> n;

    std::vector<int> vektor;

    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Unesite " << i+1 << ". broj: ";
        std::cin >> x;
        vektor.push_back(x);
    }


    bool postoji = ImaStepenDva(vektor);

    // ispis rezultata
    if (postoji) {
        std::cout << "Medju unesenim brojevima postoji barem jedan broj stepena 2.\n";
    } else {
        std::cout << "Nema broja stepena 2 medju unesenim brojevima.\n";
    }

    return 0;
}

