#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[26]={0};
	string s;
	cin>>s;
	int l=(int)s.size();
	for (int i = 0; i < l; ++i)
	{
		int p=s[i];
		p=p-97;
		a[p]=1;
	}
	int n;
	cin>>n;
	while(n--){
		string s1;
		cin>>s1;
		int count=0;
		int k=s1.size();
		for (int i = 0; i < k; ++i)
		{
			int q=s1[i];
			q=q-97;
			if (a[q]==0)
			{
				count++;
			}else{
				count=count;
			}
		}
		cout<<count<<endl;
		if (count>0)
		{
	     cout<<"No"<<endl;
		}else{
			cout<<"yes"<<endl;
		}
	}
	return 0;
}
