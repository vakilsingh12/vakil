#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int count=0;
		for (int i = 0; i < s.length()-1; ++i)
		{
			if(s[i]=='C'){
				if(s[i+1]=='C'||s[i+1]=='E'||s[i]=='S'){
					count++;
				}
			}
			else if(s[i]=='E'){
				if(s[i+1]=='S'||s[i+1]=='E'){
					count++;
				}
			}else if(s[i]=='S'){
              if(s[i+1]=='S'){
              	count++;
              }
			}
		}
		if(count==s.size()-1){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
