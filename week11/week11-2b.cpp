//week11-2b.cpp
//SOIT107_ADVANCE_008_C_C++
#include <iostream>
using namespace std;
int max_digit(int n)
{
	int ans=n%10;
	while(n>0){//Bo-Pi Fa
		if(n%10>ans)ans=n%10;
		n=n/10;
		}
	return ans;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
