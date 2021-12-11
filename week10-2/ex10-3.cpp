// S202148 柳澤快
#include <iostream>
using std::cout, std::cin;

template <typename T>
T sum(T a, T b = 1)
{
    int c{0};
    for (int i = b; i <= a; i++)
    {
        c += i;
    }
    return c;
}

int main()
{
    int x, y;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
    cout << "The sum of all numbers form 1 to y is " << sum(y) << ", and\n";
    cout << "that from x to y is " << sum(y, x) << ".\n";

    return 0;
}
