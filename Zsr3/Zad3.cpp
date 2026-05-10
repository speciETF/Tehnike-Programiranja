#include <iostream>
#include <vector>
#include <stdexcept>



std::vector<double> IndeksiElementa(std::vector<double> A, std::vector<int>B){

std::vector<double>novi;
int n=0;

for(int i=0;i<B.size();i++){
if(B.at(i) < 0 || B.at(i) >= A.size())
    throw std::range_error("Vrijednosti vektora B ne mogu biti indeksi niti jednog elementa vektora A");
        n=B.at(i);

for(int j=0;j<A.size();j++){
    if(j==n){

        novi.push_back(A.at(j));

    }


}
}
 return novi;

}


int main() {
    std::vector<double> A = {10.5, 20.2, 30.3, 40.4, 50.5, 60.6};
    std::vector<int> B = {3, 5, 2, 0, 5};

    try {
        std::vector<double> rezultat = IndeksiElementa(A, B);

        std::cout << "Novi vektor: ";
        for(int i = 0; i < rezultat.size(); i++) {
            std::cout << rezultat.at(i) << " ";
        }
        std::cout << std::endl;
    }

    catch (std::range_error &e) {
        std::cout << "Greska: " << e.what() << std::endl;
    }

    return 0;
}
