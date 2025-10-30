//week08-1.cpp
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int ans=0;
        for(int i=0;i<accounts.size();i++){
            int now=0;//迴圈前面now=0
            for(int j=0;j<accounts[0].size();j++){
                now += accounts[i][j];//把錢加起來
            }//迴圈裏面 更新now
            //迴圈後面 now拿來用
            ans = max(ans,now);//最有錢的人更新答案
        } 
        return ans;   
    }
};