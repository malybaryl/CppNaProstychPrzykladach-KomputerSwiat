//Napisz program, który dla dwóch podanych na wejściu liczb wypisze ich sumę, różnicę, iloczyn, iloraz

#include <iostream>
#include <math.h>

int main()
{
float number1;
float number2;

std::cout << "Podaj pierwsza liczbe: ";
std::cin >> number1;
std::cout << "Podaj druga liczbe: ";
std::cin >> number2;

std::cout << std::endl
<< "Suma:    " << number1 << " + " << number2 << " = " << number1+number2 << std::endl
<< "Roznica: " << number1 << " - " << number2 << " = " << number1-number2 << std::endl
<< "Iloczyn: " << number1 << " * " << number2 << " = " << number1*number2 << std::endl
<< "Iloraz:  " << number1 << " / " << number2 << " = " << number1/number2 << std::endl;

return 0;
}