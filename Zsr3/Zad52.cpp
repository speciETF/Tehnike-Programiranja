
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>


std::string BrojeviUStringu(std::string tekst, std::vector<double> v) {
    std::string novi;
    int brojIndex = 0;

    for (size_t i = 0; i < tekst.size(); i++) {
        if (tekst[i] == '%' && i + 1 < tekst.size() && tekst[i+1] == 'd') {
            if (brojIndex >= v.size())
                throw std::range_error("Nedovoljno brojeva");

            int cijeli = static_cast<int>(v[brojIndex]);
            novi += std::to_string(cijeli);
            brojIndex++;
            i++;
        }

        else if (tekst[i] == '%' && i + 1 < tekst.size() && tekst[i+1] == 'f') {
            if (brojIndex >= v.size())
                throw std::range_error("Nedovoljno brojeva");

            novi += std::to_string(v[brojIndex]);
            brojIndex++;
            i++;
        }
        else {
            novi += tekst[i];
        }
    }

    return novi;
}

int main() {
    std::string tekst;
    std::vector<double> brojevi;
    int n;
    double d;

    std::cout << "Unesite tekst: ";
    std::getline(std::cin, tekst);

    std::cout << "Koliko brojeva cete unijeti? ";
    std::cin >> n;

    std::cout << "Unesite brojeve: ";
    for(int i = 0; i < n; i++) {
        std::cin >> d;
        brojevi.push_back(d);
    }

    try {
        std::string rezultat = BrojeviUStringu(tekst, brojevi);
        std::cout << "Rezultat: " << rezultat << std::endl;
    } catch(const std::range_error& e) {
        std::cout << "Greska: " << e.what() << std::endl;
    }

    return 0;
}
