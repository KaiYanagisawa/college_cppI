#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

int main(int argc, const char *argv[])
{
    double value;
    int i;
    vector<int> imported_data;
    vector<int> export_data;

    //ファイル読み込み、vector型imported_dataへ数値を渡す
    ifstream fin("./peach0.txt");
    //<- "  "内に読み込み画像データ（テキストファイル）のファイルパスを記述
    while (fin >> i)
    {
        imported_data.push_back(i);
    }

    //奇数の画素を-128 or 偶数番目（0を含む）の画素を-96

    for (int i = 0; i < imported_data.size(); i++)
    {
        if (i % 2 == 0)
            imported_data[i] -= 96;
    }

    // //画像の上下反転(180°回転)

    for (int i = 1; i <= imported_data.size(); i++)
    {
        export_data.push_back(imported_data[imported_data.size() - i]);
    }

    // //ファイル保存
    cout
        << "Output Data = ";
    string output_text_path;
    cin >> output_text_path;
    cout << endl;

    // //ファイル保存
    ofstream output_text_data;
    output_text_data.open(output_text_path);

    for (int i = 0; i < export_data.size(); i++)
    {
        output_text_data << export_data[i] << " ";
    }

    output_text_data.close();

    return 0;
}