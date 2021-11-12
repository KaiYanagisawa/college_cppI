// S202148 柳澤快
#include <iostream>
#include <vector>
int main()
{
    std::vector<char> v;
    for (char x{}; std::cin >> x;)
        v.push_back(x);
    for (int i = 1; i <= v.size(); i++)
        std::cout << v[8 - i] << " ";
    std::cout << std::endl;
    return 0;
}