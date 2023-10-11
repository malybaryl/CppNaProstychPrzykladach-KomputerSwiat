//Napisz program, który oblicza logarytm naturalny podanej na wejściu danych liczb

#include <iostream>
#include <math.h>

int main()
{
    int number;
    std::cout << "log( liczba )" << std::endl
    << "liczba = "; 
    std::cin >> number;
    std::cout << std::endl << "log( " << number << " ) = " << log(number);
    return 0;
}