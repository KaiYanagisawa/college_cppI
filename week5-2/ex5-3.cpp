// S202148 柳澤快
#include <iostream>
#include <string>

void swap_string(std::string &st1, std::string &st2)
{
    std::string st_box;
    st_box = st2;
    st2 = st1;
    st1 = st_box;
}
void st_sort(std::string &st1, std::string &st2, std::string &st3)
{
    if (st1 > st2)
        swap_string(st1, st2);
    if (st2 > st3)
        swap_string(st2, st3);
    if (st1 > st2)
        swap_string(st1, st2);
}
int main()
{
    std::string string1, string2, string3;
    std::cout << "Input string1:";
    std::cin >> string1;
    std::cout << "Input string2:";
    std::cin >> string2;
    std::cout << "Input string3:";
    std::cin >> string3;
    st_sort(string1, string2, string3);
    std::cout
        << "1:" << string1 << " "
        << "2:" << string2 << " "
        << "3:" << string3 << std::endl;
    return 0;
}
