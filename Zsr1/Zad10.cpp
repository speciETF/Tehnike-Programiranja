#include <iostream>
#include <cmath>

bool ProstiBroj(int x) {
    if(x < 2)
        return false;

    for(int i = 2; i <= std::sqrt(x); i++) {
        if(x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

int br=0;

std::cout<<"Unesite broj";
std::cin>> br;

for(int i=2; i<=br;i++){

if(ProstiBroj(i)){
  if(br%i==0){
std::cout<<i<<",";
br=br/i;
}
}
}


return 0;
}
