

#include <iostream>

bool SimetricanBroj(int orginal){


int obrnuti=0;
int cifra=0;
int n = orginal;

while(n>0){
    cifra=n%10;
    obrnuti=obrnuti*10+cifra;
    n/=10;
}

if(obrnuti==orginal) return true;
else return false;

}


int main(){

int br=123321;



auto rez=SimetricanBroj(br);

std::cout<<"Simetricnost broja je: "<<std::boolalpha<<rez;
return 0;


}
