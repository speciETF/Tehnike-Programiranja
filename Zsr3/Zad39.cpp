
#include <iostream>
#include <string>

bool Suglasnici(std::string s){

int brojac=0;

for(char c: s){

if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
  brojac++;

  if(brojac>2){

  return false;
  }

}
else {
    brojac = 0;
}

}
return true;

}



int main() {
    std::string rijec;
    std::cout << "Unesite rijec: ";
    std::cin >> rijec;

    if(Suglasnici(rijec)) {
        std::cout << "Rijec je korektna." << std::endl;
    } else {
        std::cout << "Rijec nije korektna." << std::endl;
    }

    return 0;
}
