




#include <iostream>
#include <vector>



std::vector<int>PovecaniParni(std::vector<int>v){
int n;
int cifra;
int Novibroj;
int mnozilac=1;
std::vector<int> novi;

for(int i=0;i<v.size();i++){
n=v.at(i);
Novibroj=0;
while(n>0){
    cifra=n%10;
    if(cifra%2==0){

       cifra+=1;
    }
    Novibroj=cifra*mnozilac+Novibroj;
 n/=10;
 mnozilac*=10;

}
novi.push_back(Novibroj);
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

    std::vector<int> rezultat = PovecaniParni(vektor);

    std::cout << "Rezultat transformacije elemenata vektora: ";
    for(int i = 0; i < rezultat.size(); i++) {
        std::cout << rezultat.at(i) << " ";
    }
    std::cout << "\n";

    return 0;
}


