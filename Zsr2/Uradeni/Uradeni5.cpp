#include <iostream>
#include <vector>
#include <utility>

typedef std::vector<int> vektor;

bool DaLiJeProst(int n) {
    if(n < 2 || n != 2 && n % 2 == 0) return false;
    for(int i = 3; i <= n / i; i += 2)
        if(n % i == 0) return false;
    return true;
}

std::pair<vektor,vektor> ProstiFaktoriSaEksponentom(int n){
    vektor faktori;
    vektor vrijednosti;

    int i = 2;


    while(n>1){
       if (DaLiJeProst(i) && n%i==0){
               int brojac = 0;
           while(n%i==0){
             brojac++;
            n=n/i;
        }
        faktori.push_back(i);
        vrijednosti.push_back(brojac);
    }
    i++;

    }

    return std::make_pair(faktori, vrijednosti);
}

int main(){
    int br = 77265552;

    auto rezultat = ProstiFaktoriSaEksponentom(br);

    vektor Vektor = rezultat.first;
    vektor Vrijednosti = rezultat.second;

    std::cout << "prosti faktori sa Eksponentom glase ";

    for(int i = 0; i < Vektor.size(); i++){
        std::cout << Vektor.at(i) << " na ( " << Vrijednosti.at(i) << ") ";
    }

    return 0;
}
