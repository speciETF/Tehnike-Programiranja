

#include <iostream>


int main(){

char znak;

std::cout<<"Unesite neki znak";
std::cin>> znak;
int broj = static_cast<int>(znak);


std::cout << "ASCII je: " << broj << std::endl;
std::cout << "Prethodni znakovi : " << static_cast<char>(broj-1) <<" , "<<static_cast<char>(broj-2) << std::endl;
std::cout << "Slijedeæi znakovi: " << static_cast<char>(broj+1) <<" , "<<static_cast<char>(broj+2) << std::endl;


return 0;
}
