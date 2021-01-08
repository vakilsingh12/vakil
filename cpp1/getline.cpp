#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	stringstream str(s);
	string word;
	while(str>>word){
		cout<<word<<endl;
	}
	return 0;
}