#include <iostream>

void VeciManjiOdPet(int n, int &manji, int &veci){

 manji=0;
  veci=0;


while(n>0){
 int cifra=n%10;

if(cifra>5){
  veci += cifra;
  } else {
  manji += cifra;
        }

        n/=10;
        }
        }



void VeciManjiOdPet(int n, int &manji, int &veci);

int main(){
    int n;

    std::cout << "Unesite broj: ";
    std::cin >> n;

    int manji, veci;

    VeciManjiOdPet(n, manji, veci);

    std::cout << "Zbir cifara koje nisu vece od 5: " << manji << std::endl;
    std::cout << "Zbir cifara koje su vece od 5: " << veci << std::endl;

    return 0;
}
