
#include<iostream>
#include <vector>


bool  SviElementiSuJednaki( std::vector<double> vektor){

for(int i=0; i<vektor.size(); i++){
for(int j=i+1; j<vektor.size(); j++){
    if(vektor.at(i)!=vektor.at(j)){
        return false
    }
}
}
    return true;
}
}







bool  SviElementiSuRazliciti(std::vector<double> vektor){

for(int i=0; i<vektor.size(); i++){
for(int j=i+1; j<vektor.size(); j++){
    if(vektor.at(i)==vektor.at(j)){
             return false;

    }
}
}

return true;
}

}



int main() {
    int n;
    std::vector<double> Vek;

    std::cout << "Koliko brojeva u vektoru zelite? ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        double x;
        std::cout << "Unesite broj " << i+1 << ": ";
        std::cin >> x;
        Vek.push_back(x);
    }

    auto rezJednaki = SviElementiSuJednaki(Vek);
    auto rezRazliciti = SviElementiSuRazliciti(Vek);

    std::cout << std::boolalpha;
    std::cout << "Svi elementi su jednaki: " << rezJednaki << "\n";
    std::cout << "Svi elementi su razliciti: " << rezRazliciti << "\n";

    return 0;
}
