#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
	string s;
	getline(cin,s);
	stringstream str(s);
	string word;
	int count=0;
	while(str>>word){
		if(word=="not")
		count++;		
	}
	if(count>0){
		cout<<"Real Fancy"<<endl;
	}else{
		cout<<"regularly fancy"<<endl;
	}
	}
}