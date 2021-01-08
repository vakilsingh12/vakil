#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		string s1,s2;
		cin>>s1>>s2;
		int a[26]={0};
		int b[26]={0};
		int k=(int)s1.size();
		for (int i = 0; i < k; ++i)
		{
			int x=s1[i]-97;
			a[x]++;
			int y=s2[i]-97;
			b[y]++;
		}
		int count=0;
		for (int j= 0; j < 26; ++j)
		{
			if(a[j]!=b[j]){
				count++;
			}
		}
		if(count==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
