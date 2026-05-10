#include <deque>
#include <algorithm>
#include<iostream>

void BrojDjelioca(std::deque<int> &dek){

std::sort(dek.begin(),dek.end(),[](int a, int b){

 auto Dijeli=[](int n){
   int brojac=0;
  for(int i=1;i<=n;i++){
  if(n%i==0){
   brojac++;
  }


  }
 return brojac;
 };

  int da = Dijeli(a);
  int db = Dijeli(b);

if (da != db) return da > db;
return a < b;


});

}




int main() {
    std::deque<int> dek = {12, 10, 6, 15, 8, 9, 4, 7, 5, 20};

    BrojDjelioca(dek);

    std::cout << "Sortiran dek po broju djelilaca: ";
    for (int x : dek) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
