//week10-3.cpp把羅馬數字算出來
//13. Roman to Integer
//(1)要有對照表,字母對數字
//(2)正常的相加,倒裝句
//Input:"MCMXCIV"
//M:1000,(C:100,M:1000),(X:10,C:100),(I:1,V:5)
class Solution {
public:
    int helper(char c){//把一個字母變成一個數字
        if(c=='I')return 1;
        if(c=='V')return 5;
        if(c=='X')return 10;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D')return 500;
        if(c=='M')return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int total=0,prev=0,now=0;
        for(int i=0;i<s.length();i++){
            //錯誤的算法total+=helper(s[i]);//還沒有處理倒裝句
                prev=now;//現在變成舊的prev數字
                now=helper(s[i]);//現在新的數字
                if(prev<now)total=total - prev - prev + now;//倒裝句前小後大,扣兩次prev
                else total+=now;
        }
        return total;
    }
};
