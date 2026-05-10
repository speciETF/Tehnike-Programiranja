
#include <iostream>
int main() {

int sat;

std::cout<<"Unesite eljeni broj sati";
std::cin>> sat;

int Firma1= 10+sat*0.5;
int Firma2= sat*0.8;

if(Firma1< Firma2){
std::cout<<"Isplatnija je Firma1";
}

else{
std::cout<<"Isplatnija je Firma2";
}



return 0;
}
