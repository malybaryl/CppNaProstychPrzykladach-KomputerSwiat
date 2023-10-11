//Napisz program, który oblicza pole koła o padanym na wejściu danych promieniu

#include <iostream>
#include <math.h>

int main()
{
    int number;
    std::cout << "P=pi*R^2" << std::endl 
    << "R = ";
    std::cin >> number;
    std::cout << std::endl << "P= " << M_PI*number*number << " [j^2]";
}