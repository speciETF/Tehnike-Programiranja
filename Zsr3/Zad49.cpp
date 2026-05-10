


#include <iostream>
#include <string>
#include <vector>



std::vector<int>CifreUTekstu(std::string recenica){
std::vector<int> rezultat;


for(char c : recenica){
    if(std::isdigit(c)){

        rezultat.push_back(c - '0');


    }



}


return rezultat;
}



int main() {
    std::string s;

    std::cout << "Unesite recenicu: ";
    std::getline(std::cin, s);

    std::vector<int> brojevi = CifreUTekstu(s);

    std::cout << "Pronadjeni brojevi: ";
    for(int b : brojevi) {
        std::cout << b << " ";
    }
    std::cout << std::endl;

    return 0;
}
