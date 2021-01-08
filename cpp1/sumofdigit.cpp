#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a,sum=0;
		cin>>a;
		ostringstream str1;
		str1<<a;
		string s=str1.str();
		int l=s.length();
		for(int i=0;i<l;i++){
			int c=s[i];
			int p=c-48;
			sum+=p;
		}
		cout<<sum<<endl;
	}
}
