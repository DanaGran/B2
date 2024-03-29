#include <iostream>
#include <iomanip>

int main(){
    int numar , suma = 0 , i = 1 ;
    double medie;

    while( std::cin>>numar ){
        if( numar >= 0 && numar <= 10)
        {    suma=suma+numar;
            medie = (double)suma / i ;
        }
        else{
            std::cout<<std::fixed<<std::setprecision(2)<<medie<<" ";
            continue;

        }
        i++;

        std::cout<<std::fixed<<std::setprecision(2)<<medie<<" ";
    }
    return 0;
}