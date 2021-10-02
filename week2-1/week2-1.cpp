#include <iostream>
using namespace std;
int main()
{
    bool a{12 % 4};
    bool b{12 % 5};
    cout << std::boolalpha << a << " " << b << "\n";
}