#include <iostream>
#include <string>

void swap_string(std::string &st1, std::string &st2)
{
    std::string st_box;
    st_box = st2;
    st2 = st1;
    st1 = st_box;
}
void st_strong()
{
}
int main()
{
    std::string string1, string2, string3;
    std::cout << "Input string1:";
    std::cin >> string1;
    std::cout << std::endl;
    std::cout << "Input string2:";
    std::cin >> string2;
    std::cout << std::endl;
    std::cout << "Input string3:";
    std::cin >> string3;
    std::cout << std::endl;
    swap_string(string1, string2);
    std::cout << string1 << " " << string2;
    return 0;
}
