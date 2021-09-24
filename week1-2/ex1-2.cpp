#include "iostream"
using namespace std;
int main()
{
    int sum{0}, i{0};
    cout << "CPU"
         << " ";
    cin >> i;
    sum += i;
    i = 0;
    cout << "RAM"
         << " ";
    cin >> i;
    sum += i;
    i = 0;
    cout << "SSD"
         << " ";
    cin >> i;
    sum += i;
    i = 0;
    cout << "GPU"
         << " ";
    cin >> i;
    sum += i;
    i = 0;
    sum *= (1 - 0.155);
    cout << "Payment"
         << " " << sum;
}