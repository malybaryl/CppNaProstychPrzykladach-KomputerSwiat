//Napisz program w którym znajduję się 20-elementowa tablica liczb całkowitych. Użytkownik powinien podać liczbę, a program powinien zwrócić informację, czyy ta liczba znajduje się w tablicy
#include<iostream>

int main()
{
    int array[19];
    int number;
    bool numberWas = false;
    
    for (int i=0 ; i<20 ; i++)
    {
        if (i==0)
        {
            array[i]=1;
        }
        else
        {
            array[i]=array[i-1]*array[i-1]+1;
        }
    }

    std::cout << "Wprowadz liczbe: ";
    std::cin >> number;

    for(int i=0 ; i<20 ; i++)
    {
        if(array[i]==number)
        {
            std::cout << "Liczba wystepuje w tablice";
            numberWas = true;
        }
    }

    if(numberWas==false)
    {
        std::cout << "liczba nie wystepuje w tablicy";
    }
}