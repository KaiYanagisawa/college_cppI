// ex3-2_skel.cpp   以下の(0) -(5)に適切なコードを埋めよ

#include <iostream>
// (0)
#include <vector>
#include <cmath>

int main()
{
  std::vector<double> p1{1.0, 1.0}; // 二次元ベクターの初期化宣言 (1.0, 1.0)

  //サイズを指定して宣言したvectorに値を直接入力する方法
  std::vector<double> p2(2); // 要素数２のvector変数p2 サイズのみ指定 中身は０
  //(1)
  std::cout << "Input 2D point p2 ( x and y ) !";
  std::cin >> p2[0] >> p2[1];

  // 空のvectorを用意して，入力した値を，vectorに挿入(push_back)する方法
  std::vector<double> p3; // 要素数０のvector変数
  //(2)
  double p3_x{0}, p3_y{0};
  std::cout << "Input 2D point p3 ( x and y ) !";
  std::cin >> p3_x >> p3_y;
  p3.push_back(p3_x);
  p3.push_back(p3_y);

  // p1 p2 p3座標表示
  //(3)
  std::cout << "p1:(" << p1[0] << ", " << p1[1] << ")" << std::endl;
  std::cout << "p2:(" << p2[0] << ", " << p2[1] << ")" << std::endl;
  std::cout << "p3:(" << p3[0] << ", " << p3[1] << ")" << std::endl;

  // p1とp2の距離を計算して表示
  //(4)
  double distance{0};
  distance = sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2));
  std::cout << "The distance of p1 and p2 is " << distance << "\n";

  // p2とp3を二次元ベクトルとした場合のベクトルの和p4を計算して表示
  std::vector<double> p4(2); // 要素数２のvector 値は０
  //(5)
  p4[0] = p2[0] + p3[0];
  p4[1] = p2[1] + p3[1];
  std::cout << "p4:(" << p4[0] << ", " << p4[1] << ")" << std::endl;

  return 0;
}
