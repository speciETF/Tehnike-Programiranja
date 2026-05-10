
#include <deque>
#include <algorithm>
#include<iostream>

void Raspon(std::deque<int> &dek){

std::sort(dek.begin(),dek.end(),[](int a, int b){

 auto Racunaj=[](int n){
   int cifra=0;
   int minN=9;
   int maxN=0;

   while(n>0){
   cifra=n%10;
   if(cifra>maxN){
   maxN=cifra;
   }
   if(cifra<minN){
   minN=cifra;

   }

        n/=10;

   }

 return maxN-minN;
 };

  int ra = Racunaj(a);
  int rb = Racunaj(b);

if (ra != rb) return ra < rb;
return a < b;


});

}




int main() {
    std::deque<int> dek = {1234, 4321, 5678, 8765, 1357, 2468, 1111, 9999, 2023, 3141};

    Raspon(dek);

    std::cout << "Sortiran dek po rasponu: ";
    for (int x : dek) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
