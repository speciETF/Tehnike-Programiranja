

#include<iostream>
#include<vector>
typedef std::vector<int> vektor;



bool JednakeCifre(int n){


vektor v;
int cifra=0;

while(n>0){
    cifra=n%10;
    v.push_back(cifra);
    n=n/10;
   }

   for(int i=0; i<v.size();i++){
   for(int j=i+1; j<v.size();j++){
   if(v.at(i)==v.at(j)) return true;
   }

   }
return true;

}


int main() {
    int br;
    std::cout << "Unesite broj: ";
    std::cin >> br;

    if(JednakeCifre(br))
        std::cout << "Broj ima ponovljenih cifara.\n";
    else
        std::cout << "Sve cifre su razlièite.\n";

    return 0;
}
