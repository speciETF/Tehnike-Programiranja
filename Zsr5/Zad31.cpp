#include <iostream>
#include <vector>
#include <functional>

template<typename T>
std::vector<T> primijeni(T x, std::function<T(T)> f, int n) {
    std::vector<T> rezultat;
    T trenutni = x;
    for (int i = 0; i < n; ++i) {
        trenutni = f(trenutni);
        rezultat.push_back(trenutni);
    }
    return rezultat;
}

int main() {
    // Test 1: udvostruèavanje broja
    std::cout << "Udvostruèavanje od 1, n=6:\n";
    auto udvostruci = [](int x) { return x * 2; };
    auto v1 = primijeni(1, std::function<int(int)>(udvostruci), 6);
    for (int x : v1) std::cout << x << " ";
    std::cout << "\n\n";

    // Test 2: dodavanje stringa
    std::cout << "Dodavanje 'ha' na string, n=5:\n";
    auto dodajHa = [](std::string s) { return s + "ha"; };
    auto v2 = primijeni(std::string(""), std::function<std::string(std::string)>(dodajHa), 5);
    for (const auto& s : v2) std::cout << "\"" << s << "\"\n";
    std::cout << "\n";

    // Test 3: float dijeljenje na pola
    std::cout << "Dijeljenje na pola od 100.0, n=5:\n";
    auto polovica = [](double x) { return x / 2.0; };
    auto v3 = primijeni(100.0, std::function<double(double)>(polovica), 5);
    for (double x : v3) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}

