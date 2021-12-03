// ex9-3_skel.cpp

#include<iostream>
#include<iomanip>
#include<fstream>
#include<vector>
using std::cin, std::cout, std::cerr, std::setw;

struct Member  // 会員データのstruct定義
{  std::string name;    // 氏名 
   double weight;      // 体重
   double height;      // 身長
   double bmi{0};  // BMI値 デフォルト値は0だが，体重と身長がわかったら．計算して設定する
   std::string hantei; // BMI値により，判定 "LEAN", "STANDARD", "FAT"のいずれかが入る 
};

void print_title()  // 表示の際の先頭行の各項目のタイトル表示 全て幅10文字で表示
{      cout<<setw(10)<<"Name"<<setw(10)<<"Weight"<<setw(10)<<"Height"
           <<setw(10)<<"BMI"<<setw(10)<< "Hantei" <<"\n";
}

void print(Member m)  //引数の一人分の会員mのデータを表示   
{
// (10)  mの氏名，体重，身長，BMI, 判定を全て幅10文字で表示． print_title()を参考にせよ


}

int main()
{
  // １．会員データファイルmembers.txtをリードでopen, 
  std::ifstream fin("members.txt");
  //  (1)  finファイルのエラーチェックを行い．エラーの場合にはプログラム終了 （main関数は１を返す）


  //ファイル名の表示 
  cout<<"Input file name = members.txt\n";

  //２．ファイルから．名前，体重，身長を読み，bmiを計算しhenteiも設定，members配列に登録 
  std::vector<Member> members;  // 会員データの配列
  Member m;  //一人分の会員データm


  while( /*            (2)           */ ) // (2) finファイルから一人分の名前，体重，身長をmに読む
  {                                       //  ファイルの終わり(EOF)まで，このwhileは繰り返される

    //             (3)             // (3) BMIを計算し，mに設定

    //              (4)            // (4) BMI値から，判定をmに設定

   //              (5)            //  (5) 会員データmを会員データベース配列membersに加える

  }
// 3．カテゴリー入力と表示の繰り返し
 std::string category;  //表示したい会員のカテゴリもしくは，プログラム中止のためのQuit

 while (true){  //キーボードから終了(QUIT)が入力されるまで，永久ループ

   //表示したいカテゴリ, もしくは，プログラム終了(Quit) を入力  
    cout<<"Specify category to display (FAT,STANDARD,LEAN, ALL) or QUIT!  ";
    cin >> category;     //キーボード入力

    if( category == "QUIT" )  break;    // QUITの時はbreakでwhile終了．
					// または，return 0; で，main終了でもいい

    else if (/*     (6)     */ ){      // (6) ALLの時 全員の表示

        cout<<"-------- " << category <<" Members list\n";  //表示するカテゴリの表示
        print_title();    // 各項目のタイトル表示

    //            (7)            // (7) membersの全員のデータを表示 print関数利用

    }
    else if( /*           (8)             */ ) // (8)表示肥満度指定の時
    {
        cout<<"-------- " << category <<" Members list\n";  //表示するカテゴリの表示
        print_title();    // 各項目のタイトル表示

        //             (9)            // (9) membersの該当カテゴリの会員データを表示print関数利用

    }
    else  //指定した単語以外の入力の時は，再度入力に戻る
        cout<<"category input error! input again!\n";     

 }  // whileの終了

 return 0;
}



