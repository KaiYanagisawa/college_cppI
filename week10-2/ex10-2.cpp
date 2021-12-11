// S202148 柳澤快
#include <iostream>
using std::cout, std::cin;

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    double da, db;
    cout << "Input two integers: ";
    cin >> a >> b;
    cout << "Input two decimals: ";
    cin >> da >> db;
    cout << "The maximum value of two integers is " << max(a, b) << ", and\n";
    cout << "that of two decimals is " << max(da, db) << ".\n";

    return 0;
}