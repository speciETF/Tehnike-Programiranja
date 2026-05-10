#include <iostream>
#include <vector>





std::vector<int>SavrseniBrojevi(std::vector<int>v){
int n;
int djelioci=0;
std::vector<int> novi;

for(int i=0;i<v.size();i++){
n=v.at(i);
djelioci=0;

for(int j=1;j<n;j++){ // j ide od 1 do n-1
    if(n%j==0){   //ako je j djeljiv
        djelioci+=j; //sabiramo u djelioce
    }


}
if(djelioci==n){
    novi.push_back(n);

}


}

return novi;


}



int main() {
    std::vector<int> vektor;
    int broj;

    std::cout << "Unesite cijele brojeve (0 za kraj):\n";
    while (true) {
        std::cin >> broj;
        if (broj == 0) break;
        vektor.push_back(broj);
    }

    std::vector<int> savrseni = SavrseniBrojevi(vektor);

    if (savrseni.empty()) {
        std::cout << "Nema savršenih brojeva u unesenim brojevima.\n";
    } else {
        std::cout << "Savršeni brojevi meðu unesenim su: ";
        for (int i = 0; i < savrseni.size(); i++) {
            std::cout << savrseni.at(i) << " ";
        }
        std::cout << "\n";
    }

    return 0;

}
