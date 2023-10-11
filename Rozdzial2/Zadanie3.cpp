//Napisz program, który sprawdzi, czy dla liczby podanej na wejściu większą wartość ma logarytm naturalny, czy logarytm dziesiętny

#include <iostream>
#include <math.h>

int main()
{
    float number;
    std::cout << "log( liczba ) >?< log10( liczba )" << std::endl << std::endl
    << "liczba = ";
    std::cin >> number ;
    if(number<=0)
    {
        std::cout << "Liczba musi byc wieksza od 0";
    }
    else
    {
        std::cout << std::endl << "Log( " << number << " ) = " << log(number) 
        << "                Log10( " << number << " ) = " << log10(number) << std::endl;

        if(log(number) > log10(number))
        {
            std::cout << "log( " << number << " ) : jest wieksze";
        }
        else if(log(number) < log10(number))
        {
            std::cout << "log10( " << number << " ) : jest wieksze";
        }
        else
        {
            std::cout << "log( " << number << " ) = log10( " << number << " )";
        }
    }
}