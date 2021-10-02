//S202148 柳澤快
#include <iostream>
#include <cmath>
int main()
{
    double x;
    std::cout << "Input a number:";
    std::cin >> x;
    if (std::ceil(x) != std::floor(x))
    {
        std::cout << "This is a real number." << std::endl;
        double x_small{x - (int)x};
        (std::floor(x_small * 10) >= 5) ? (std::cout << "Rounded off:" << std::floor(x) + 1 << std::endl
                                                     << "Carried-up." << std::endl)
                                        : (std::cout << "Rounded off:" << std::floor(x) << std::endl
                                                     << "Not carried-up." << std::endl);
    }
    else
    {
        std::cout << "This is an integer." << std::endl;
    }
}