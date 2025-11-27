//week12-1.cpp
//SOIT107_ADVANCE_013_C_C++
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	int ans=a;
	if(b>ans) ans=b;
	if(c>ans) ans=c;
	if(d>ans) ans=d;
	return ans;
}
int min(int a,int b,int c,int d)
{
	int ans=a;
	if(b<ans) ans=b;
	if(c<ans) ans=c;
	if(d<ans) ans=d;
	return ans;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
