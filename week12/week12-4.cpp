//week12-4.cpp 學習計畫 Math 第5題
//LeetCode 1232. Check If It Is a Straight Line
//測一下,所有的點是不是在同一個點上
//斜率a:b=c:d或a/b=c/d或a*b=c*d
//dx:dy=dxx:dyy 或......dx*dyy==dy*dxx
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0=coordinates[0][0],y0=coordinates[0][1];
        int x1=coordinates[1][0],y1=coordinates[1][1];
        int dx=x1-x0,dy=y1-y0;
        for(int i=2;i<coordinates.size();i++){
            int xx=coordinates[i][0],yy=coordinates[i][1];
            //希望dx*dyy==sy*dxx但是如果不相等直接失敗
            if(dx*(yy-y0) != dy*(xx-x0))return false;
        }//前面有失敗就會提早結束
        return true;//成功
    }
};
