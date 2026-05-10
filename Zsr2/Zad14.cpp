#include<iostream>
#include <vector>

std::vector<int> DjeliociBroja(int n){
std::vector<int> v;

  for(int i=1;i<=n;i++){
  if(n%i==0){

    v.push_back(i);

  }
  }
  return v;



}

int main() {
    int br;
    std::cout << "Unesite prirodan broj n: ";
    std::cin >> br;

    std::vector<int> djelitelji = DjeliociBroja(br);



    std::cout << "Djelitelji broja " << br << " su: ";
    for (int x : djelitelji) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}
