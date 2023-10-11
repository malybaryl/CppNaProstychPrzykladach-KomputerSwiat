//Napisz program, który wczyta ciąg znaków i wypisze go w odwrotnej kolejności
#include<iostream>

int main()
{
    int lenghtOfText;
    std::string text;
    std::string reverseText;
    
    std::cout << "Wprowadz slowo: ";
    std::cin >> text;

    lenghtOfText=text.length();
    
    for(int i=lenghtOfText-1 ; i>=0 ; i--)
    {
        reverseText = reverseText + text[i];
    }
    std::cout << "Odwrocone slowo: " << reverseText;
    return 0;
}