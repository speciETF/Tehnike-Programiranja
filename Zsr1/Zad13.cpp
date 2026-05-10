
#include <iostream>
#include <cmath>
int main() {
    double br;
    double suma=0;
    double umnozak=1;
    int brojac=0;
std::cout<<"Unesite koliko zelite brojeva, 0 za prekid";

 while(true) {
  std::cin >> br;
    if(br == 0) break; // prekid unosa na 0


 suma+=br;
 umnozak*=br;
  brojac++;
}


double Arhimeticka=suma/brojac;
double Geometrijska= pow(umnozak, 1.0 / brojac);


std::cout<<"Arhimeticka sredina glasi:"<<Arhimeticka<<"Geometrijska sredina glasi:"<<Geometrijska;
return 0;
}
