#include <iostream>
using namespace std;

int MultOtpornost(int n) {
    int brojac = 0;

    while(n > 9) {
        int umnozak = 1;
        int privremena = n;

        while(privemena > 0) { //dok ne zavrsimo broj trenutni
            int cifra = privremena % 10;
            umnozak *= cifra;
            privremena /= 10;
        }

        n = umnozak;  //njegov umnozak postaje n
        brojac++; // runda gotova
    }

    return brojac;
}

int main() {
    int br = 6788;

    int otpornost = MultOtpornost(br);

    cout << "Multiplicativna otpornost broja " << br << " jeste " << otpornost << endl;

    return 0;
}
