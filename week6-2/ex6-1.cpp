// S202148 柳澤快
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main()
{
    // 2次元配列 x の初期化
    vector<vector<int> > x{{1, 4}, {2, 0}, {3, 6}};

    /*
    2次元配列 x 中の 0 を 5 に置き換えるプログラムを作成せよ．
    */
    x[1][1] = 5; // ? に適切な数値を入れよ

    cout << "1st output: ";
    /*
    実行例に合うように2次元配列 x の各要素を表示するプログラムを作成せよ．
    */
    for (int i = 0; i < x[i].size(); i++)
    {
        for (int j = 0; j < x.size(); j++)
        {
            cout << x[j][i] << " ";
        }
    }
    cout << "\n";

    // 3次元配列 y の初期化
    vector<vector<vector<int> > > y{{{1, 1}, {4, 4}}, {{2, 2}, {5, 5}}, {{3, 3}, {6, 6}}};

    cout << "2nd output: ";
    /*
    実行例に合うように3次元配列 y の各要素を表示するプログラムを作成せよ．
    */

    int m{0};
    m = y[0][0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < y[j].size(); j++)
        {
            for (int k = 0; k < y.size(); k++)
            {
                cout << y[k][j][i] << " ";
            }
        }
    }
    cout << "\n";

    return 0;
}