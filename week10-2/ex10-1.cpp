// S202148 柳澤快
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int getMax(const std::vector<int> &v)
{
    int max{v[0]};
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max)
            max = v[i];
    }
    return max;
}
double getMax(const std::vector<double> &v)
{
    double max{v[0]};
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max)
            max = v[i];
    }
    return max;
}
string getMax(const std::vector<string> &v)
{
    string max{v[0]};
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].size() > max.size())
            max = v[i];
    }
    return max;
}

int main()
{
    std::vector<int> veci = {-20, 20, 0, -10, 10};
    std::vector<double> vecd = {-5.5, 5.5, 0, -3.3, 3.0};
    std::vector<string> vecstr = {"ZERO", "ONE", "TWO", "THREE", "FOUR"};

    cout << "getMax on int: " << getMax(veci) << "\n"
         << "getMax on double: " << getMax(vecd) << "\n"
         << "getMax on string: " << getMax(vecstr) << "\n";

    return 0;
}