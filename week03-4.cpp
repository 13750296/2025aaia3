//week03-4.cpp
class Solution {//使用動態規劃慢慢更新陣列就好了
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]第i層的第j個
        int N=triangle.size();//總共有幾層
        //重下往上找最下面的第N-1層沒問題本身就是最小值
        for(int i=N-2 ;i>=0;i--){
            for(int j=0;j<=i;j++){
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
            
        }
        return triangle[0][0];
    }
};