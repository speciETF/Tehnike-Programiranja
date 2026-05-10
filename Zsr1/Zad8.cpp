
#include <iostream>
int main() {

std::cout<<"Unesite 6 brojeva";

int br;
bool sviPozitivni = true;
    bool imaNeparnih = false;

for(int i =1; i<=6;i++){
std::cin>>br;

if(br<=0)
 sviPozitivni = false;

if(br%2!=0)
   imaNeparnih = true;

}

if( sviPozitivni){
std::cout<<"U nizu su svi pozitivni";
}
else{
    std::cout<<"U nizu nisu svi pozitivni";
}


if(!imaNeparnih){
std::cout<<"U nizu su svi parni";
}
else{
    std::cout<<"U nizu nisu svi parni";
}




return 0;
}
