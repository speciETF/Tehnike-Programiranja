#include<iostream>

#include<vector>
bool ImaLiParni(std::vector<int>v){

for(int i=0;i<v.size();i++){
if(v.at(i)%2==0){
        return true;
}
}
return false;

}


int main(){

int n;

std::vector<int>Vektor;
std::cout<<"Koliko brojeva zelite";
std::cin>>n;


for(int i=0;i<n;i++){
    std::cout<<"Unesite"<<" "<<i+1<<" "<<"broj";
int x;
std::cin>>x;

Vektor.push_back(x);
}

auto rez=ImaLiParni(Vektor);


std::cout<<std::boolalpha<<rez;


return 0;







}
