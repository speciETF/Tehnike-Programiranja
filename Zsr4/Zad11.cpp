
#include <iostream>

void ParniNeparni(int n, int &parni, int &neparni){

 parni=0;
neparni=0;
n= std::abs(n);

for(int i=1; n<0;i++){

if(n%i==0){
if(i%2==0){
  parni++;
  }
  } else {
     neparni++;
             }

        }
        }


        int main(){
    int n;

    while(true){
        std::cout << "Unesite broj (negativan za kraj): ";
        std::cin >> n;

        if(n < 0) break;

        int parni, neparni;
        ParniNeparni(n, parni, neparni);

        std::cout << "Broj parnih djelilaca: " << parni << std::endl;
        std::cout << "Broj neparnih djelilaca: " << neparni << std::endl;
    }

    return 0;
}
