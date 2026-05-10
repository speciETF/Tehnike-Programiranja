

#include <iostream>
#include <vector>

std::vector<int>DjeliviTrocifeni(int n){

std::vector<int> v;

for(int i=100;i<=999;i++){
    if(i%n==0){

    v.push_back(i);
    }
}

return v;
}




int main() {
    int br;
    std::cout << "Unesite prirodan broj n: ";
    std::cin >> br;

    std::vector<int> vektor = DjeliviTrocifeni(br);

    if (vektor.size() == 0) {
        std::cout << "Nema trocifrenih brojeva djeljivih sa " << br << ".\n";
    } else {
        std::cout << "Trocifreni brojevi djeljivi sa " << br << " su: ";
        for (int i = 0; i < vektor.size(); i++) {
            std::cout << vektor.at(i) << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
