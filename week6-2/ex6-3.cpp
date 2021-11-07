// S202148 柳澤快
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

/*
２つの正方行列を引数で受け取り，その行列の積を計算し，
結果の正方行列を返す matrix_product関数を作成せよ
*/
vector<vector<int> > matrix_product(vector<vector<int> > &vec1, vector<vector<int> > &vec2)
{
    int vec_size = vec1.size();
    vector<vector<int> > vec(vec_size, vector<int>(vec_size, 0));
    for (int i = 0; i < vec1.size(); i++)
        for (int j = 0; j < vec1[i].size(); j++)
            for (int k = 0; k < vec_size; k++)
                vec[i][j] += vec1[i][k] * vec2[k][j];
    return vec;
}

int main()
{
    // 2×2の正方行列A, Bに対し，C=A×B
    vector<vector<int> > A{{1, 2}, {3, 4}}, B{{2, 2}, {3, 3}};
    vector<vector<int> > C{matrix_product(A, B)};

    cout << "A*B=\n"; //計算結果を表示
    for (auto &v : C)
    {
        for (auto e : v)
            cout << e << " ";
        cout << "\n";
    }

    // 3×3の正方行列D, Eに対し，F=D×E
    vector<vector<int> > D{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        E{{-1, 2, 1}, {-2, 3, 2}, {2, -3, 5}};
    vector<vector<int> > F{matrix_product(D, E)};

    cout << "\nD*E=\n"; //計算結果を表示
    for (auto &v : F)
    {
        for (auto e : v)
            cout << e << " ";
        cout << "\n";
    }
    return 0;
}
