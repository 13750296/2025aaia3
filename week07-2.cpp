///week07-2.cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;///part1
    cin>>n;

    for(int i=1;i<n*2;i++){
        for(int j=1;j<n*2;j++){
            ///�L�X�Ӥ���,�o�{�F���ߪ�1�ܦ��N��
            int d=max(abs(i-n), abs(j-n));
            cout<<d + 1;///cout<<n;
        }
        cout<<endl;///cout<<"�{�bi�O:"<<i<<endl;///�Ӽh����
    }
}///2�|��3�h��,3�|��5�h��,4�|��7�h��,5�|��9�h��
