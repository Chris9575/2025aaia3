//week11-3.cpp學習計畫 Math 第三題
//LeetCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0,d10=0,d20=0;//四種鈔票
        for(int bill : bills){//C++進階for迴圈
            if(bill==5)d5++;//順利拿到5元鈔
            if(bill==10){//客人給你10元鈔,你要找他5元鈔
                if(d5<1)return false;//沒有5元鈔,失敗
                d10++;//拿到10元鈔
                d5--;//找出5元鈔
            }
            if(bill==20){//客人給你20元鈔,你要找他15元鈔
                if(d10>0 && d5>0){//可以
                    d20++;
                    d10--;
                    d5--;
                }
                else if(d5>=3){
                    d20++;
                    d5-=3;
                }
                else return false;//找不開,失敗
            }
        }
        return true;//順利賣光,成功
    }
};
