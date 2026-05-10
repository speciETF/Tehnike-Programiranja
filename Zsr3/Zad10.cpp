#include <iostream>
#include <vector>
#include <stdexcept>



std::vector<bool> KubBroja(std::vector<int> v){
    int n=0;
    std::vector<bool> vektor_istine;

    for(int i=0;i<v.size();i++){
        n=v.at(i);

        if(n<0){
            throw std::domain_error("Broj vektora ne moze biti negativan");
        }

        bool jest=false;

        for(int j=1;j<=n;j++){
            int kub=j*j*j;

            if(kub==n){
                jest=true;
                break; //cim nadje brejka
            }
        }

        if(jest){   //tek onda stavlja u vektor kada brejka
            vektor_istine.push_back(true);
        }else{
            vektor_istine.push_back(false);
        }
    }

    return vektor_istine;
}


int main() {
    std::vector<int> vek= {1, 8, 16, 27, 64, 125, 216, 300, 512, 729};

    try {
        std::vector<bool> r = KubBroja(vek);

        for(bool b : r) {
            std::cout << (b ? "true" : "false") << " ";
        }
        std::cout << std::endl;
    } catch (std::domain_error &e) {
        std::cout << "Greska: " << e.what() << std::endl;
    }

    return 0;
}
