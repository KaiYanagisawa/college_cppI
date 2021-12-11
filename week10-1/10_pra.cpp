#include <iostream>
int func(int x = 1, int y = 2);
int func(int x, int y)
{
    return x;
}
int main()
{
    std::cout << func();
    return 0;
}