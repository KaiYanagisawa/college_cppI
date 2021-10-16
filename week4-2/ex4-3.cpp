// S202148 柳澤快
#include <iostream>
int main()
{
    int bit{0};
    for (int i = 0; i < 11; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            (j > i - 1) ? bit = 1 : bit = 0;
            std::cout << bit;
        }
        std::cout << std::endl;
    }
}