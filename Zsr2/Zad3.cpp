
#include <iostream>
#include <vector>


bool IsteCifre(int n){
int cifra=0;
std::vector <int> v;
while(n>0){
    cifra=n%10;
    v.push_back(cifra);
    n/=10;

}
for(int i=0; i<v.size();i++){
for(int j=i+1; j<v.size();j++){
if(v.at(i)==v.at(j) || v.at(j)==v.at(i)){
return true;


}

}


}
return false;

}



int main(){
int br=355241;

auto rez=IsteCifre(br);

std::cout<<std::boolalpha<<rez;

return 0;
}
