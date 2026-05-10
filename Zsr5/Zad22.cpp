#include <iostream>
#include <vector>

template <typename It, typename F>
auto SumaAko(It pocetak, It kraj, F f) {
    typename std::remove_reference<decltype(*pocetak)>::type suma{};

    for (auto it = pocetak; it != kraj; it++) {
        if (f(*it)) {
            suma += *it;
        }
    }

    return suma;
}


int main() {
    int n;
    std::cout << "Koliko elemenata: ";
    std::cin >> n;

    std::vector<int> v(n);
    std::cout << "Unesite elemente: ";
    for (int i = 0; i < n; i++) std::cin >> v.at(i);

    auto pozitivan = [](int x) { return x > 0; };

    int rezultat = SumaAko(v.begin(), v.end(), pozitivan);

    std::cout << "Zbir pozitivnih brojeva: " << rezultat << "\n";

    return 0;
}
