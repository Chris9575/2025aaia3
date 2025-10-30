///week08-4.cpp
///數字黑洞,卡不列克常數6174(大到小-小到大,重複7次)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cout<<"請輸入任意4位數(都不同)";
    int n;
    cin>>n;
    for(int i=0;i<7;i++){///七部內必定掉到黑洞6174
        vector<int> a;///伸縮自如的陣列
        while(n>0){///剝皮法,把4位數逐一撥出來
            a.push_back(n%10);///把她推到陣列裡
            n=n/10;///剝完皮,就瘦了
            }
            sort(a.begin(),a.end());///把陣列小到大排好
            int M=a[3]*1000+a[2]*100+a[1]*10+a[0];///倒過來,大到小
            int m=a[0]*1000+a[1]*100+a[2]*10+a[3];///小到大
        ///等一下,M是甚麼?,m是甚麼?還沒發現}
        n=M-m;
        cout<<M<<"滅掉:"<<m<<"得到:"<<n<<endl;
}
}
