
#include <iostream>
#include <vector>

std::vector<int> ImaStepenDva(int n) {

    std::vector<int> v;
int i=1;
  while(i<n){
    if(n%i==0){
        v.push_back(i);

    }
    i++;

  }
     return v;
    }


int main() {
    int br;
    std::cout << "Unesite prirodan broj n: ";
    std::cin >> br;


    std::vector<int> vektor = ImaStepenDva(br);


    std::cout << "Stepene broja 2 manje od " << br << " su: ";
    for (int i = 0; i < vektor.size(); i++) {
        std::cout << vektor.at(i) << " ";
    }
    std::cout << "\n";

    return 0;
}
