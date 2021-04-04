//testlib フォルダへのパスを記述
//例えば #include "../../Documents/testlib-master/testlib.h" など
#include "testlib-master/testlib.h"

//assert.h は include しておくと便利
#include<assert.h>

using ll = long long;
using std::string;
using std::vector;

void validate(){

    int Nmax = 2e5;
    ll Kmax = 1e18;

    //N を入力し、1 以上 Nmax 以下でなければエラーを返す
    //エラーの際には第三引数で記された変数名が表示される（この場合だと N is hogehoge みたいなエラーが出る）
    int N = inf.readInt(1, Nmax, "N");

    //空白
    inf.readSpace();
    
    //long long 型の入力
    ll K = inf.readLong(1, Kmax, "K");

    //改行
    inf.readEoln();

    //文字列入力
    //a-z までの小文字のみからなる、長さが 1 以上 2000 以下の文字列であるかを判定
    string S = inf.readToken("[a-z]{1, 2000}", "S");

    inf.readEoln();

    //validation の終了時には inf.readEof() が必要
    inf.readEof();

    //他にやりたいことがあったら testlib 内の readme を読んでください
    //test_in フォルダ（中には input ケースが入ってる）をこのファイルと同じ階層に置いた上で
    //g++ test.cpp -o test
    //ls test_in | ./test
    //を順に打ち込むと一斉にテストできるはず（test.cpp はこのコードが書かれているファイルの名前に変えてください）
}

int main(){
	registerValidation();
	std::string s;
	while(std::cin>>s){
		if(s.empty())break;
		printf(("test_in/"+s+" Validation Start\n").c_str()); 
		FILE *f=fopen(std::string("test_in/"+s).c_str(),"r");
		inf.init(f,_input);
		validate();
		fclose(f);
		printf((s+" Validation OK\n").c_str());
	}
}
