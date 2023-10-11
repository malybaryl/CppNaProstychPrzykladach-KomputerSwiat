//Napisz program, który wypisze wsztskie wartości funkcji trgonometrycznej sinus dla kątw od 0 do 90

#include <iostream>
#include <math.h>

int main()
{
std::cout << "  sin" << std::endl;
for(int i=0 ; i<91 ; i++)
{
    std::cout << " " << i << " || " << sin(i) << std::endl;
    for(int j=0 ; j<16 ; j++)
    {
        std::cout << "-"; 
    }
    std::cout << std::endl;
}
return 0;
}