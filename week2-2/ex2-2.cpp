//S202148 柳澤快
#include <iostream>
int main()
{
    char ch;
    std::cout << "Input: ";
    std::cin >> ch;
    switch (ch)
    {
    case 'A':
        std::cout << "Armadillo";
        break;
    case 'B':
        std::cout << "Bison";
        break;
    case 'C':
        std::cout << "Camel";
        break;
    default:
        std::cout << "Neither A, B nor C.";
    }
    return 0;
}