#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a,sum,i=0;
		cin>>a;
		ostringstream str1;
		str1<<a;
		string s=str1.str();
		int l=s.length();
		int p=s[0]-48;
		int c=s[l-1]-48;
		sum=p+c;
		cout<<sum<<endl;
	}
}
