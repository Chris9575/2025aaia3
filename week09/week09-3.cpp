//week09-3.cpp 學習計畫Matrix第三題
//54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
            int up=0,down=M-1,left=0,right=N-1;
            //先把上下左右的邊界,都宣告一個變數初始值
            vector<int> ans;
            while(up<=down && left<=right){
                for(int i=left;i<=right;i++){//往右
                    ans.push_back(matrix[up][i]);
                }
                up++;
                for(int i=up;i<=down;i++){//往下
                    ans.push_back(matrix[i][right]);
                }
                right--;
                if(!(up<=down && left<=right))break;//邊界超過範圍、交叉，沒辦法繼續
                for(int i=right;i>=left;i--){//往左
                    ans.push_back(matrix[down][i]);
                }
                down--;
                for(int i=down;i>=up;i--){//往上
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            return ans;
    }
};
