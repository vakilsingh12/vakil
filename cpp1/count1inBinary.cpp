#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	int a;
	a=n&(n-1);
	if (a==0)
	{
		count++;
		a=n&(n-1);
	}else{count=count;}
	cout<<count<<endl;
	return 0;
}
