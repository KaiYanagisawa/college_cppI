#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    double ax{0}, ay{0}, az{0}, bx{0}, by{0}, bz{0}, AB{0};
    cout << "ax = ";
    cin >> ax;
    cout << "ay = ";
    cin >> ay;
    cout << "az = ";
    cin >> az;
    cout << "bx = ";
    cin >> bx;
    cout << "by = ";
    cin >> by;
    cout << "bz = ";
    cin >> bz;
    AB = pow((pow((bx - ax), 2) + pow((by - ay), 2) + pow((bz - az), 2)), 0.5);
    cout << "AB = " << AB;
}