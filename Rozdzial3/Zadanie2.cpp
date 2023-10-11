//Napisz program, który wczyta ciąg znaków i wypisze co drugi znak z tego ciągu
#include<iostream>

int main()
{
    int lenghtOfText;
    std::string text;
    std::string reverseText;
    
    std::cout << "Wprowadz slowo: ";
    std::cin >> text;

    lenghtOfText=text.length();
    
    for(int i=0 ; i<text.length() ; i=i+2)
    {
        reverseText = reverseText + text[i];
    }
    std::cout << "Slowo: " << reverseText;
    return 0;
}