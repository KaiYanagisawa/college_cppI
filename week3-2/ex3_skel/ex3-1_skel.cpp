// ex3-1_skel.cpp
// 以下の(1) - (6)のコメントを削除して，適切なコードを埋めること

#include <iostream>

int main()
{
  // (1)
  std::string apl{"apple"}, org{"orange"};
  std::string answer{};
  int kosu{};

  // 複数のstringを，<<で別々に表示
  std::cout << "Which do you like " << apl << " or " << org << "? ";
  std::cin >> answer;

  // 複数のstringを１つのstringへ連結してから，表示
  if (answer == apl)
    std::cout << "You like " + answer + ". I will prepare red ones!\n";
  else if (answer == org)
    std::cout << "You like " + answer + ". I have juicy ones!\n";
  else
  {
    std::cout << "Please select either " + apl + " or " + org + ".\n";
    return 0; // main関数から戻る，すなわち，この時点でプログラムは終了
  }
  std::string st{};
  // (4)
  st = "How many " + answer + " do you want?";
  std::cout << st;
  std::cin >> kosu;

  if (kosu == 1)
    // (5)
    std::cout << "You want only one " + answer;
  else if (kosu > 1)
    // (6)
    std::cout << "You want " + std::to_string(kosu) + ' ' + answer + "s";
  else
    std::cout
        << "Please input a positive number!\n";

  return 0;
}
