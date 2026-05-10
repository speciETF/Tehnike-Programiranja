
#include <iostream>

void SumeCifara(int n, int &s_par, int &s_nepar){

s_par=0;
s_nepar=0;

while(n>0){

 int cifra =n%10;

 if(cifra%2==0){
 s_par+=cifra;


 }else{
 s_nepar+=cifra;

 }
n/=10;

}



}



int main(){
    int n;

    while(true){
        std::cout << "Unesite broj (0 za kraj): ";
        std::cin >> n;

        if(n == 0) break;

        int s_par, s_nepar;

        SumeCifara(n, s_par, s_nepar);

        std::cout << "Suma parnih cifara: " << s_par << std::endl;
        std::cout << "Suma neparnih cifara: " << s_nepar << std::endl;
    }

    return 0;
}
