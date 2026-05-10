#include <iostream>
#include <vector>

std::vector<bool> SumaPetUzastopnih(std::vector<int> v) {
    std::vector<bool> novi;

    for (int i = 0; i < v.size(); i++) {
        int n = v.at(i);  // uzmemo element
        int x = (n - 10) / 5; // potencijalni prvi broj uzastopnih 5 prirodnih brojeva

        if ((n - 10) % 5 == 0 && x > 0) {
            novi.push_back(true);   // element se može prikazati kao suma pet uzastopnih brojeva
        } else {
            novi.push_back(false);  // ne može
        }
    }

    return novi;
}

int main() {
    int n;
    std::cout << "Unesite broj elemenata vektora: ";
    std::cin >> n;

    std::vector<int> vektor;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Unesite element " << i+1 << ": ";
        std::cin >> x;
        vektor.push_back(x);
    }

    std::vector<bool> rezultat = SumaPetUzastopnih(vektor);

    std::cout << "Rezultat za svaki element (taèno/netacno): ";
    for (int i = 0; i < rezultat.size(); i++) {
        std::cout << (rezultat[i] ? "taèno" : "netacno") << " ";
    }
    std::cout << "\n";

    return 0;
}
