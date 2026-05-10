#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> PotpuniKvadrati(int n) {
    std::vector<int> v;
    int i = 1;

    while (i * i < n) {
        v.push_back(i * i);
        i++;
    }

    return v;

int main() {
    int n;
    std::cout << "Unesite prirodan broj n: ";
    std::cin >> n;

    std::vector<int> vektor = PotpuniKvadrati(n);

    std::cout << "Potpuni kvadrati manji od " << n << " su: ";
    for (int i = 0; i < vektor.size(); i++) {
        std::cout << vektor.at(i) << " ";
    }
    std::cout << "\n";

    return 0;
}
