#include <iostream>

int IzbaciNule(int n){

int cifra=0;
int desetica=1;
int novi=0;

while(n>0){

 cifra=n%10;
    if(cifra!=0){
     novi=cifra*desetica+novi;
     desetica*=10;
    }
     n=n/10;

    }
    return novi;
}

int main() {
    int br = 213000312;

    br = IzbaciNule(br);

 std::cout << "Broj bez nule jeste: "<<br;
    return 0;
}
