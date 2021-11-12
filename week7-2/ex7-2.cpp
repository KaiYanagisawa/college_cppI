// S202148 柳澤快
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
int main()
{
    std::ifstream fin{"inokashira_input.dat"};
    std::ofstream fout{"reverse.txt"};
    std::vector<std::string> v;
    if (!fin)
    {
        std::cerr << "cannot read file\n";
        return 1;
    }
    for (std::string x{}; fin >> x;)
        v.push_back(x);
    for (int i = 1; i <= v.size(); i++)
    {
        std::cout << v[17 - i] << std::endl;
        (i == v.size()) ? fout << v[0] : fout << v[17 - i] << std::endl;
    }
    return 0;
}