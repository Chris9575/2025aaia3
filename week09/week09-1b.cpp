//week09-1b.cpp
//SOTI106_ADVANCE_004
#include <iostream>
using namespace std;
int  main()
{
	char c;
	while(cin>>c){
		if(c>='A' && c<='Z')c=c-'A'+'a';
		else if(c>='a' && c<='z')c=c-'a'+'A';
		cout<<c;
		}
		cout<<"\n";
}
