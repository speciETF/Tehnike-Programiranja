#include <iostream>
#include <vector>
#include <stdexcept>

double* ReciprociVektora(const std::vector<double>& v) {
    int n = v.size();
    if(n == 0) throw std::runtime_error("Vektor je prazan!");

    double* niz = new double[n];
    for(int i = 0; i < n; i++) {
        if(v[i] == 0) throw std::runtime_error("Element je 0, reciproèna vrijednost ne postoji!");
        niz[i] = 1.0 / v[i];
    }

    return niz;
}

int main() {
    try {
        std::vector<double> v = {2.0, 4.0, 0.5};

        double* recip = ReciprociVektora(v);

        std::cout << "Reciproène vrijednosti: ";
        for(int i = 0; i < v.size(); i++) {
            std::cout << recip[i] << " ";
        }
        std::cout << std::endl;

        delete[] recip; // oslobaðanje memorije

    } catch(const std::exception &e) {
        std::cout << "Izuzetak: " << e.what() << std::endl;
    }

    return 0;
}
