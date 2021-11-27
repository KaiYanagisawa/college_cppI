// S202148 柳澤快
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	int low{0}, cap{0}, sp{0}, lb{0}; //小文字，大文字，スペース，改行の数

	//(1) その他に必要な変数の宣言と初期化
	char ch{};
	std::string file{};

	std::cout << "Input File Name : ";

	//(2) ファイル名の入力を促す（標準入力）
	std::cin >> file;
	std::ifstream fin{file};

	//(3) (2)で入力した名前のファイル読み込み＆エラー処理
	if (!fin)
	{
		std::cerr << "cannot open\n";
		return 1;
	}

	//(4) 小文字，大文字，スペース，改行の数の数え上げ
	while (fin >> std::noskipws >> ch)
	{
		if (ch >= 'a' && ch <= 'z')
			low++;
		else if (ch >= 'A' && ch <= 'Z')
			cap++;
		else if (ch == ' ')
			sp++;
		else if (ch == '\n')
			lb++;
	}

	//(5) それぞれの数を順に出力
	std::cout << "Lw : " << low << "\n"
			  << "Cp : " << cap << "\n"
			  << "Sp : " << sp << "\n"
			  << "Lb : " << lb << "\n";

	return 0;
}
