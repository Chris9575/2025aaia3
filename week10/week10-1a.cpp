//week10-1a.cpp寫兩次,第一次用for迴圈,第二次用數學
//1523. Count Odd Numbers in an Interval Range
//從low...high裡面有幾個奇數
class Solution {
public:
    int countOdds(int low, int high) {
    int ans=0;
    for(int i=low;i<=high;i++){
            if(i%2==1) ans++;//奇數
    }
    return ans;
    }
};
