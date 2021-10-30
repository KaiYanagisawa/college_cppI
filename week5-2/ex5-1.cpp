#include <iostream>

void print_star(int star_num)
{
    for (int i = 0; i < star_num; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}

int main()
{
    int x;
    std::cout << "Print a triangle having right angle in lower left\n"
              << "Input the number of step number:";
    std::cin >> x;
    for (int i = 1; i <= x; i++)
    {
        print_star(i);
    }
}