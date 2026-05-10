#include <iostream>
#include <vector>

std::vector<bool> ProizvodPetUzastopnih(std::vector<int> v) {
    std::vector<bool> novi;
int proizvod=1;
    for (int i = 0; i < v.size(); i++) {
        int n = v.at(i);  // uzmemo element
       int a=1;
        for(int i=0;i<n;i++){
        while(a<=5){
            proizvod*=a;

        if (proizvod==n) {
            novi.push_back(true);   // element se može prikazati kao suma pet uzastopnih brojeva
        } else {
            novi.push_back(false);  // ne može
        }
        }
    }
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

    std::vector<bool> rezultat = ProizvodPetUzastopnih(vektor);

    std::cout << "Rezultat za svaki element (taèno/netacno): ";
    for (int i = 0; i < rezultat.size(); i++) {
        std::cout << (rezultat[i] ? "taèno" : "netacno") << " ";
    }
    std::cout << "\n";

    return 0;
}
