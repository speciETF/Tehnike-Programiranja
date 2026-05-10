#include <iostream>
#include <string>

void velikoSlovo(std::string &s) {
    for (int i = 0; i < s.length(); i++) { // cak iako recenica pocinje sa 20 razmaka samo ova petlja ide dalje a
                                              // svi ifovi se preskacu
        if (i == 0 && std::islower(s[i])) {  //za prvu
            s[i] = std::toupper(s[i]);
        }
        else if (s[i-1] == ' ' && std::islower(s[i])) {// za ostale rijeci
            s[i] = toupper(s[i]);
        }
    }
}

int main() {
    std::string s = " Dobio sam 25 maraka ";
    std::cout << "Prije:  [" << s << "]" << std::endl;
    velikoSlovo(s);
    std::cout << "Poslije:[" << s << "]" << std::endl;
    return 0;
}
