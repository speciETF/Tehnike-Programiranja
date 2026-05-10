#include <deque>
#include <algorithm>
#include<iostream>

void BrojCifara(std::deque<int> &dek){

std::sort(dek.begin(),dek.end(),[](int a, int b){

 auto Broji=[](int n){
   int brojac=0;
   int cifra=0;
    while(n>0){
    cifra=n%10;
   brojac++;
   n/=10;
  }

 return brojac;

   };

  int ba = Broji(a);
  int bb = Broji(b);

if (ba != bb) return ba < bb;
return a < b;


});

}



int main() {
    std::deque<int> dek(10);
    std::cout << "Unesite 10 cijelih brojeva: ";
    for(int i = 0; i < 10; ++i) std::cin >> dek[i];

    BrojCifara(dek);

    std::cout << "Sortiran dek po broju cifara: ";
    for(int x : dek) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
