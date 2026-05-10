

#include<iostream>


int Podbroj(int n, bool izbor){

int cifra=0;
 int Parnibroj=0;
  int NeParnibroj=0;
    int mnozilac=1;
if(izbor==true){
    while(n>0){
    cifra=n%10;
      if(cifra%2==0){
        Parnibroj = cifra * mnozilac+ Parnibroj;
        mnozilac*=10;
      }
      n/=10;
        }
return Parnibroj;

}


if(izbor==false){
        while(n>0){
    cifra=n%10;
      if(cifra%2==1){
        NeParnibroj = cifra * mnozilac + NeParnibroj;
            mnozilac*=10;
      }
        n/=10;
        }

return NeParnibroj;
}



}




int main(){


int br= 342781;
bool Izbor=true;

int rez= Podbroj(br,Izbor);

std::cout<<rez;

return 0;

}
