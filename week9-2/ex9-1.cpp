// S202148 柳澤快
// ex9-1_skel.cpp

#include <iostream>

// (1) Struct Studentを定義せよ．
struct Student
{
   int number;
   std::string name;
   int score;
};

int main()
{
   Student s1, s2;

   // (2) s1, s2にキーボードから入力
   std::cout << "Input num, name and score for student1 ! ";
   std::cin >> s1.number >> s1.name >> s1.score;
   std::cout << "Input num, name and score for student2 ! ";
   std::cin >> s2.number >> s2.name >> s2.score;

   // (3) 高い得点の学生のデータを表示, 同点の場合は，両方を表示
   if (s1.score > s2.score)
   {
      std::cout << "Top Score : " << s1.number << " " << s1.name << " " << s1.score << std::endl;
   }
   else if (s1.score < s2.score)
   {
      std::cout << "Top Score : " << s2.number << " " << s2.name << " " << s2.score << std::endl;
   }
   else
   {
      std::cout << "Top Score : " << s1.number << " " << s1.name << " " << s1.score << std::endl;
      std::cout << "Top Score : " << s2.number << " " << s2.name << " " << s2.score << std::endl;
   }

   // (4)平均点を表示,
   double average;
   average = ((double)s1.score + s2.score) / 2;
   std::cout << "Average score: " << average << std::endl;
   return 0;
}
