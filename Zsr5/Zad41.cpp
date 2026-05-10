#include <deque>
#include <algorithm>
#include<iostream>

int Kriterij(int n){

int cifra=0;
int novibroj=0;

while(n>0){

cifra=n%10;

novibroj=novibroj*10+cifra;

n/=10;

}
return novibroj;


}


void SlikaUOgledalu(std::deque<int>& dek) {
    std::sort(dek.begin(), dek.end(), [](int a, int b) {
        return Kriterij(a) < Kriterij(b);
    });
}





//=====TAKODJER MOGUCA KONSTRUKCIJA=========

// inline lambda koja raèuna "sliku u ogledalu" za svaki broj
//        auto ogledalo = [](int n) {
//            int obrnuto = 0;
//            while (n > 0) {
//                obrnuto = obrnuto * 10 + n % 10;
//                n /= 10;
//            }
//            return obrnuto;
//        };



int main() {
    std::deque<int> dek = {372, 179, 45, 8, 120, 33, 91, 7, 100, 56};

    SlikaUOgledalu(dek);

    std::cout << "Dek sortiran po slici u ogledalu: ";
    for (int x : dek) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
