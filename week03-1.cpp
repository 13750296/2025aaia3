///week03.cpp�ǲ�c++���}�Cvector<int> a;
#include <iostream>///cin cout
#include <vector>///c++�}�Cvector
using namespace std;

int main()
{
    vector<int> a(2);///���Ӱ}�C�̭������(�}�C���j�p�O2)

    for(int i=0; i<a.size();i++) cout <<a[i]<<' ';///�L�X�}�C
    cout<<endl;///����

    a.push_back(99);///��99����}�C����᭱.push_back()
    a.push_back(77);///��77����}�C����᭱.push_back()

    for(int i=0; i<a.size();i++) cout <<a[i]<<' ';///�L�X�}�C
    cout<<endl;///����


}
