//Napisz program do pierwiastkowania pozwalający na obliczenie pierwiastka dowolnego stopnia z dowolnej liczby,które to dane pojawią się na wejściu do programu

#include <iostream>
#include <math.h>

int main()
{
    float a;
    float n;
    std::cout << "Podaj stopien pierwiastka: ";
    std::cin >> n;
    std::cout<< "Podaj liczbe: ";
    std::cin >> a;
    std::cout << std::endl << "Wynik to: " << pow(a,1/n);
}