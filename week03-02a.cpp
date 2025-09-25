//week03-2a.cpp
//把陣列每個數字乘起來看是正數負數還是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;// 因為0乘任何數都會變成0,只有1最乖,乘什麼變什麼
        for(int i=0; i<nums.size();i++){//看有幾個數迴圈跑幾次
            ans*=nums[i];//把每次把nums[i]乘進ans裡
        } //數字越乘越大1000個數字到一半就爆炸了
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0; 
    }
};