///week03-03a.cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)ans.push_back(nums[i]);
        }//上面把不是0的數暫時放在ans裡等一下塞回去
        //再用for迴圈放回去
        for(int i=0;i<nums.size();i++){
            if(i<ans.size())nums[i]=ans[i];//塞回去
            else nums[i]=0;//其他放0

        }
        
    }
};