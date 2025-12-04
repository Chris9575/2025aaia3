//week13-1.cpp 聖誕倒數寫程式 advent of code 2025 第一天第一題
//
int main() {
    char c; //字母對應方向,L左轉,R右轉
    int d;//數字要轉動幾格
    int now=50;//一開始的密碼鎖指向50
    int ans=0;//轉動時有幾次停在0的地方
    while(cin>>c>>d){//一直讀資料:讀字母、讀數字
        //if(c=='L')cout<<"往左轉"<<d<<"格\n";
        //if(c=='R')cout<<"往右轉"<<d<<"格\n";
        //把上面兩行的中文註解掉
        if(c=='L')now=now-d;//減掉
        if(c=='R')now=now+d;//加上
        now=(now%100+100)%100;//太大、小的都限制在0-99間
        //cout<<"現在的刻度是:"<<now<<"\n";
        if(now==0)ans++;
    }
    cout<<"答案是"<<ans;
}
