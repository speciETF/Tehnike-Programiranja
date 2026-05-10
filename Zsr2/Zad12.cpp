#include<iostream>
#include<vector>

bool TrocifrenBroj(std::vector<int>v){

 int n=0;
 int cifra=0;
 int brojac=0;

for(int i=0; i<v.size(); i++){

    n=v.at(i); // n je neki broj iz vektora
    brojac=0;
    while(n>0){

    cifra=n%10; //uzme posljenju cifru
     brojac++; // uracuna je
      n/=10; // skloni je


    if(brojac==3){
    return true;
    }
    }

}

return false;



}


int main(){




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

    bool postoji = TrocifrenBroj(vektor);

    if (postoji) {
        std::cout << "Medju unesenim brojevima postoji barem jedan trocifreni broj.\n";
    } else {
        std::cout << "Nema trocifrenih brojeva medju unesenim brojevima.\n";
    }

    return 0;
}
