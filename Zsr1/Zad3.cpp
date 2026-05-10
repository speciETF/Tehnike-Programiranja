

#include <iostream>
int main() {

double br;
std::cout<<"Unesite neki broj";

std::cin>>br;

 if(std::cin.fail()) {
        std::cout << "Uneseni podatak nije broj.";
    }


else{
if(br == int(br)){

if(br>0)
std::cout<<"Uneseni broj je prirodan broj.";

if(br<0)
    std::cout << "Uneseni podatak je cijeli broj, ali nije prirodan.";

if(br==0){
        std::cout << "Uneseni podatak je cijeli broj, ali nije prirodan.";

}
}

if(br != int(br)) {
std::cout<<"Uneseni podatak je realan broj, ali nije cijeli.";
}
}


return 0;
}
