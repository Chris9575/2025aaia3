//week09-2.cpp學習計畫Matrix 第二題
//1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M=mat.size(),N=mat[0].size();
        int ans=0;
        for(int i=0;i<M ;i++){//左手i vs.M
            for(int j=0;j<N;j++){//右手j vs.N
                //if(是對角線的話)ans+=mat[i][j];
                if(i==j||i+j==N-1)ans+=mat[i][j];
            }
        }
        return ans;
    }
};
