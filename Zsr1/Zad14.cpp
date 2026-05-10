
#include <iostream>
int main() {

    int br;

    std::cout<<"Unesite broj";
    std::cin>> br;

int original = br;
int obrnuti = 0;
while(br > 0){
    int cifra = br % 10;
    obrnuti = obrnuti * 10 + cifra;
    br = br / 10;
}

if(original == obrnuti)
    std::cout << "Broj je palindrom";
else
    std::cout << "Broj nije palindrom";
 return 0;
}
