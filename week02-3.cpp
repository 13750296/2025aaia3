// week02-3.cpp
#include <iostream>///cin coutŪ�J���,�L�X���
#include <string>///string�r�ꪺ�\��
using namespace std;///�ϥΩR�W�Ŷ�
int main()
{
	string a;///�ŧi�r��a
	cin>>a; ///Ū�J�r��a

	string ans;///�ŧi�r��ans�񵪮ץΪ�
	int N= a.length();///�r��a������
	for(int i=N-1; i>=0;i--){///�˹L�Ӫ��j��
		ans += a[i];///�b�j���,��a[i]���ans�᭱
	}

	cout<<a<<'+'<<stoi(ans)<<'='
	<<stoi(a)+stoi(ans)<<endl;
}///stoil() is "string to int"��r���ܾ��

