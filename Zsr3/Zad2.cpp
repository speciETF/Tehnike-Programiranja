#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> Matrica;

void NajMRedNajVKol(Matrica &mat) {
    int indeksR = 0;
    int indeksK = 0;
    int minR = 0;
    int maxK = 0;
    int sumaDijagonale = 0;
    int n = mat.size();

    // Suma dijagonale
    for(int i = 0; i < n; i++) {
        sumaDijagonale += mat[i].at(i);
    }

    // Red sa najmanjom sumom
    for(int i = 0; i < n; i++) {
        int sumaR = 0;
        for(int j = 0; j < n; j++) {
            sumaR += mat[i].at(j);
        }
        if(i == 0 || sumaR < minR) {
            minR = sumaR;
            indeksR = i;
        }
    }

    // Kolona sa najvecom sumom
    for(int j = 0; j < n; j++) {
        int sumaK = 0;
        for(int i = 0; i < n; i++) {
            sumaK += mat[i].at(j);
        }
        if(j == 0 || sumaK > maxK) {
            maxK = sumaK;
            indeksK = j;
        }
    }

    std::cout << "Red sa najmanjom sumom: " << indeksR << std::endl;
    std::cout << "Kolona sa najvecom sumom: " << indeksK << std::endl;
    std::cout << "Suma dijagonale: " << sumaDijagonale << std::endl;
}

int main() {
    int n;
    std::cout << "Unesite dimenziju matrice n: ";
    std::cin >> n;

    Matrica mat(n, std::vector<int>(n));

    std::cout << "Unesite elemente matrice:" << std::endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cin >> mat[i].at(j);
        }
    }

    NajMRedNajVKol(mat);

    return 0;
}
