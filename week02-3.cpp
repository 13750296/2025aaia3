// week02-3.cpp
#include <iostream>///cin cout讀入資料,印出資料
#include <string>///string字串的功能
using namespace std;///使用命名空間
int main()
{
	string a;///宣告字串a
	cin>>a; ///讀入字串a

	string ans;///宣告字串ans放答案用的
	int N= a.length();///字串a的長度
	for(int i=N-1; i>=0;i--){///倒過來的迴圈
		ans += a[i];///在迴圈裡,把a[i]塞到ans後面
	}

	cout<<a<<'+'<<stoi(ans)<<'='
	<<stoi(a)+stoi(ans)<<endl;
}///stoil() is "string to int"把字串變整數

