#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,count=0;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for (int i = 0; i < s.length(); i+=2)
		{
			if(s[i]=='A' && s[i+1]!='B' || s[i]=='B'&&s[i+1]!='A'){
				count++;
			}
		}
		if(count==0){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
}