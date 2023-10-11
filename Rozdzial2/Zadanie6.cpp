//Napisz program, który dla podanej na wejściu liczby wypisze jej zaokrąglenie na trzy poznane w tym rozdziale sposoby

#include <iostream>
#include <math.h>

int main()
{
float number;
std::cout << "Podaj liczbe: ";
std::cin >> number;
std::cout << std::endl << "round( " << number << " ) = " << round(number) 
          << std::endl << "ceil( " << number << " ) = " << ceil(number)
          << std::endl << "floor( " << number << " ) = " << floor(number);
return 0;
}