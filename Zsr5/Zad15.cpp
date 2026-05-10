#include <iostream>
#include <string>
#include <iterator>

template <typename It1, typename It2>
It1 NadjiPodblok(It1 prvi_pocetak, It1 prvi_kraj, It2 drugi_pocetak, It2 drugi_kraj) {
    for (It1 it = prvi_pocetak; it != prvi_kraj; it++) {// prvi kursor je jednak pocetku prvog bloka
    // koristimo ga za pomjeranje
        It1 it2 = it; // drugi kursor je jednak prvom kursoru
        It2 it3 = drugi_pocetak; // treci kursor je jednak pocetku drugog bloka

        while (it3 != drugi_kraj && it2 != prvi_kraj && *it2 == *it3) {
            it2++;
            it3++;
        }

        if (it3 == drugi_kraj) {
            return it; // podblok pronaðen
        }
    }

    return prvi_kraj; // podblok nije pronaðen
}




int main() {
    std::string blok1[] = {"jedan","dva","tri","èetiri","pet"};
    std::string blok2[] = {"tri","èetiri"};

    auto rez = NadjiPodblok(blok1, blok1 + 5, blok2, blok2 + 2);

    if (rez != blok1 + 5) {
        std::cout << "Podblok pronaðen na indeksu: "
                  << std::distance(blok1, rez) << "\n";
    } else {
        std::cout << "Podblok nije pronaðen\n";
    }

    return 0;
}
