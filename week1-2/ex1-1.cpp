#include "iostream"
using namespace std;
int main()
{
    //変数定義
    double h{0}, r{0}, Pi{0};
    double v{0}, V_double{0};
    int V_int{0};

    //値の代入
    cout << "h = ";
    cin >> h;
    cout << "r = ";
    cin >> r;
    cout << "Pi = ";
    cin >> Pi;

    //体積の計算
    v = (h * Pi * r * r)/3;

    V_double = v;
    V_int = v;

    //結果の出力
    cout << "Volume(double) = " << V_double << endl
         << "Volume(integer) = " << V_int;
}