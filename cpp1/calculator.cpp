#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	double a,b;
	double res;
	cin>>a>>b;
	char ch;
	cin>>ch;
	if (ch=='+')
	{
		res=a+b;
	}else if(ch=='-'){
		res=a-b;
	}else if(ch=='*')
	{
		res=a*b;
	}else if(ch=='/'){
      res=a/b;
	}
	cout<<fixed<<setprecision(6)<<res<<endl;
	return 0;
}
