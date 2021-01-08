#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int max_far=a[0];
	int max=0;
	int start=0,end=0,s=0;
	for (int i = 0; i < n; ++i)
	{
		max+=a[i];
		if(max_far<max){
			max_far=max;
			start=s;
			end=i;
		}
		if(max<0){
			max=0;
			s=i+1;
		}
	}
	int sum=0;
	for (int i = start; i <=end ; ++i)
	{
		sum+=a[i];
	}
	cout<<sum<<endl;
	return 0;
}
