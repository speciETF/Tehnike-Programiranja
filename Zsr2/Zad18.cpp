
#include <iostream>
#include <vector>

#include<math.h>

std::vector<int> ParniNeparni(int Niz[], int n){

std::vector<int> v;
    std::vector<int> Parni;
    std::vector<int> Neparni;

//prvo razdijelimo u dva vektora
    for(int i=0; i<n; i++){
      if(Niz[i] % 2 == 0) {
    Parni.push_back(Niz[i]);


    } else{
        Neparni.push_back(Niz[i]);
    }

    }

     //pa sastavimo sve u jedan

        for(int i=0; i<Parni.size(); i++){
        v.push_back(Parni.at(i));

        }

      for(int i=0; i<Neparni.size(); i++){
        v.push_back(Neparni.at(i));

        }

   return v;


}


int main() {
    const int kapacitet = 5;
int niz[kapacitet];

    std::cout << "Unesite " << kapacitet << " brojeva:\n";
    for (int i = 0; i < kapacitet; i++) {
        std::cout << "Broj " << i+1 << ": ";
        std::cin >> niz[i];
    }


    std::vector<int> vektor =ParniNeparni(niz, kapacitet);

    std::cout << "Elementi u parnom-neparnom poretku su poretku su: ";
    for (int i = 0; i < vektor.size(); i++) {
        std::cout << vektor.at(i) << " ";
    }
    std::cout << "\n";

    return 0;
}
