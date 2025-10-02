//WEEK04-1.cpp
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;//一開始喝了那麼多瓶
        while(numBottles >= numExchange){//如果瓶子數>=兌換量就兌換
            numBottles=numBottles-numExchange+1;//兌換1瓶飲料;
            ans++;//多喝一瓶了
            numExchange++;//兌換條件多一瓶


        }
        return ans;
    }
};