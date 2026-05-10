
#include<iostream>
#include<vector>

std::vector<bool>ProstiBrojevi(std::vector<int>v){

int n;
std::vector<bool>novi;

 for(int i=0;i<v.size();i++){

  n=v.at(i);
  bool prost=true;

   if (n <=1){
  prost=false;
}

   for (int j = 2; j < n; j++) {
        if (n % j == 0){
    prost=false;
    break;

    }
}
    novi.push_back(prost);

}
  return novi;
}





int main() {
    int n;
    std::cout << "Unesite broj elemenata vektora: ";
    std::cin >> n;

    std::vector<int> vektor;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Unesite element " << i+1 << ": ";
        std::cin >> x;
        vektor.push_back(x);
    }

    std::vector<bool> rezultat = ProstiBrojevi(vektor);

    int brojProstih = 0;
    for (int i = 0; i < rezultat.size(); i++) {
        if (rezultat[i]) brojProstih++;
    }

    std::cout << "Ukupno prostih brojeva u vektoru: " << brojProstih << "\n";

    return 0;
}
