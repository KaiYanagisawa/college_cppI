//S202148 柳澤快
#include <iostream>
#include <cmath>
int main()
{
    int x, y;
    int xy;
    std::cout << "Input integers: ";
    std::cin >> x >> y;
    xy = std::pow(x, y);
    (x >= 0 && y >= 0) ? (std::cout << xy) : (std::cout << "One of integers is negative.");
    return 0;
}