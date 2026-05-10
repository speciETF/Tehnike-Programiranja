

#include <iostream>
#include <vector>
#include <stdexcept>

std::vector<int> BrojCifara(std::vector<long long int> v ){

std::vector<int> rezultat;
int brojac=0;
int n=0;
int cifra=0;

    for(int i=0;i<v.size();i++){
        n=v.at(i);
        if(n<0){
            throw std::domain_error ("Element vektora ne moze biti negativan!");


        }
        brojac=0;
        while(n>0){
            cifra=n%10;
            brojac++;
            n/=10;

        }
        rezultat.push_back(brojac);




    }


return rezultat;


}



int main() {
    std::vector<long long int> v = {123, 5, 7890, 45678, 1, 999, 100000, 42, 77, 8080};

    try {
        std::vector<int> r = BrojCifara(v);

        std::cout << "Broj cifara: ";
        for(int i = 0; i < r.size(); i++) {
            std::cout << r.at(i) << " ";
        }
        std::cout << std::endl;

    } catch(std::domain_error &e) {
        std::cout << "Greska: " << e.what() << std::endl;
    }

    return 0;
}
