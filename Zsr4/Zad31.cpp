#include <iostream>
#include <string>

void transformiraj(std::string &s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = s[i] + 1;
    }
}

int main() {
    std::string s = "PROBA";
   std::cout << "Prije: " << s << endl;
    transformiraj(s);
    std::cout << "Poslije: " << s << endl;
    return 0;
}
