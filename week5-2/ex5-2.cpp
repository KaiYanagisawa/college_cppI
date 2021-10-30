// S202148 柳澤快
#include <iostream>

void print_star(int star_num, int floor)
{
    for (int j = 0; j < floor - star_num; j++)
        std::cout << " ";
    for (int i = 0; i < star_num * 2 - 1; i++)
        std::cout << "*";
    std::cout << std::endl;
}

int main()
{
    int x;
    std::cout << "Print a triangle having right angle in lower left\n"
              << "Input the number of step number:";
    std::cin >> x;
    for (int i = 1; i <= x; i++)
        print_star(i, x);
    return 0;
}