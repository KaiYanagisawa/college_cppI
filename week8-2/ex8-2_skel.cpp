// S202148 柳澤快
#include<iostream>
#include<fstream>
#include<string>

//(6) 文字変換のための関数convChar
char convChar(char &c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	else if (c == '\n')
		c = ' ';
	return c;
}

int main()
{
	char c;

	//(7) 入出力ファイルの用意
	std::ifstream fin{"file-ex8-1.txt"};
	std::ofstream fout{"convert.txt"};

	//(8) エラー処理
	if (!fin)
	{
		std::cerr << "cannot open\n";
		return 1;
	}

	//(9) 文字変換
	while (fin >> std::noskipws >> c)
	{
		convChar(c);
		fout << c;
	}

	std::cout
		<< "Completed!" << std::endl;

	return 0;
}
