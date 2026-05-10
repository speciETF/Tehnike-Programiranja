


  #include <iostream>
#include <string>

std::string ukloniRazmake(const std::string& recenica, char znak) {
bool BioRazmak=false;
std::string rezultat;

for(char c: recenica){
    if(c==' '){
       if(!rezultat.empty() && !BioRazmak){
           rezultat+=znak;
           BioRazmak=true;
       }

       }
        if(c!=' '){
           rezultat+=c;
           BioRazmak=false;
   }
}



    if (!rezultat.empty() && rezultat.back() == ' ')
        rezultat.pop_back();

      return rezultat;

      }



      int main() {
    std::string s;
    char z;

    std::cout << "Unesite recenicu: ";
    std::getline(std::cin, s);

    std::cout << "Unesite znak: ";
    std::cin >> z;

    std::string rezultat = ukloniRazmake(s, z);

    std::cout << "Rezultat: " << rezultat << std::endl;

    return 0;
}
