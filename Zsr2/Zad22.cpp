
#include <iostream>
#include <vector>


bool JeLiProst(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


std::vector <int>SlozeniBrojevi(std::vector <int> v){

std::vector <int> novi;


for(int i=0; i<v.size(); i++){
if(!JeLiProst(v.at(i))){

    novi.push_back(v.at(i));

}
}
return novi;

}





int main() {
    int n;
    std::cout << "Unesite broj elemenata vektora: ";
    std::cin >> n;

    std::vector<int> vektor;

    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Unesite element " << i + 1 << ": ";
        std::cin >> x;
        vektor.push_back(x);
    }

    std::vector<int> slozeni = SlozeniBrojevi(vektor);

    std::cout << "Elementi koji su slozeni brojevi: ";
    for(int i = 0; i < slozeni.size(); i++) {
        std::cout << slozeni.at(i) << " ";
    }
    std::cout << "\n";

    return 0;
}
