
#include<iostream>
#include<math.h>
#include<vector>
bool PotpuniKvadrat(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        int korijen = std::sqrt(v.at(i));
        if (korijen * korijen == v.at(i)) {
            return true;
        }
    }
    return false;
}




int main(){
    int n;
    std::vector<int> Vektor;

    std::cout << "Koliko brojeva zelite: ";
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "Unesite " << i+1 << ". broj: ";
        int x;
        std::cin >> x;
        Vektor.push_back(x);
    }

    auto rez =  PotpuniKvadrat(Vektor);
    std::cout << std::boolalpha << "Postoji barem jedan potpuni kvadrat: " << rez << "\n";

    return 0;
}
