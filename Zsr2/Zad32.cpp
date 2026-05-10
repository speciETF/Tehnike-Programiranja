

#include <iostream>
#include <vector>





std::vector<int>FaktorijelBrojevi(std::vector<int>v){
int n;
int faktorijel=1;

std::vector<int> novi;

for(int i=0;i<v.size();i++){
n=v.at(i);
faktorijel=1;
for(int j=1;j<=n;j++){ // j ide od 1 do n-1
    faktorijel*=j;
}
    novi.push_back(faktorijel);



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
        std::cout << "Unesite " << i + 1 << ". element: ";
        std::cin >> x;
        vektor.push_back(x);
    }

    std::vector<int> rezultat = FaktorijelBrojevi(vektor);

    std::cout << "Faktorijeli unesenih brojeva su: ";
    for(int i = 0; i < rezultat.size(); i++) {
        std::cout << rezultat.at(i) << " ";
    }
    std::cout << "\n";

    return 0;
}



