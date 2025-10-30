//week08-2
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    //先讀完記下全部零對應的i和j
        int M = matrix.size(),N = matrix[0].size();
        vector<int>markI(M,0),markJ(N,0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    markI[i]=1;
                    markJ[j]=1;
                }
            }
        }
        //第2階段,再照著markI和markJ的標記,把整條都清為0
        for (int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1||markJ[j]==1)matrix[i][j]=0;
            }
        }
    }    
};