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
            ///ㄓぇ,祇瞷現いみ1Τ種
            int d=max(abs(i-n), abs(j-n));
            cout<<d + 1;///cout<<n;
        }
        cout<<endl;///cout<<"瞷i琌:"<<i<<endl;///加糷阀├
    }
}///2穦Τ3糷加,3穦Τ5糷加,4穦Τ7糷加,5穦Τ9糷加
