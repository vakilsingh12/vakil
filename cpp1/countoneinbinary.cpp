#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=1;
	cin>>n;
	n=n&(n-1);
	while(n!=0){
     count++;
     n=n&(n-1);
	}
	cout<<count<<endl;
	return 0;
}
