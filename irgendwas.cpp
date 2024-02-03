#include <iostream>
#include "irgendwas.hpp"


Testklasse::Testklasse(int ca, int cb){
    a = ca;
    b = cb;
}

int Testklasse::berechnen(){
    return a + b;
}

int main(){
    
    std::cout << "Hallo Welt" << std::endl;

    Testklasse testobjekt = Testklasse(10, 15);
    std::cout << testobjekt.berechnen() << std::endl;

    return 0;
}