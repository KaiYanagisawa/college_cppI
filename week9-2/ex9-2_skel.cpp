// ex9-3_skel.cpp

#include <iostream>
# include <cmath>   // 実数の絶対値を返すfabs（）を利用可能にする

// (1) Struct Pointを定義せよ．デフォルトの座標は原点とする 教科書p.99



// (2) cinから直接 Struct Point へ入力する関数を完成させよ．教科書p.105
std::istream& operator>>(std::istream & in,          )
{

}

// (3) coutへ直接Struct Pointを出力する関数を完成させよ. 教科書p.105
std::ostream& operator<<(std::ostream & out,     )
{

}

// (4) ２つのPointを引数として受け取り，中点のPointを計算して返す関数mid



// (5) 3つのPointを引数として受け取り，3点で囲まれる三角形の面積を返す関数triangle



int main() {
   // (6) struct Point p1の宣言，座標は，x=1.2 y=3.4に初期化せよ． 教科書p.99

   Point p2, p3, pm;

   // p3にキーボードから座標値を入力
   std::cout<< "Input x,y for point p3!  ";
   std::cin >> p3;    			// 関数(2)を利用

   // p1, p2, p3の座標値を表示
   std::cout<<"p1: "<<p1<<" p2: " <<p2<<" p3: "<<p3<<"\n"; // 関数(3)を利用

   // p1とp3 の中点pmの計算  
   pm = mid(p1, p3);			// 関数midを利用  

   // pmの座標値を表示
   std::cout<<"Middle point pm : "<<pm<<"\n"; // 関数(3)を利用

   // p1とp2とp3で囲まれる三角形の面積を計算  
   std::cout<<"Triangle area (p1, p2, p3) is "<<triangle(p1, p2, p3)<<"\n"; //関数triangleを利用   

   return 0;
}
