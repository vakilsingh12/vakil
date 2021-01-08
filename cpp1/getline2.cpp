#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	getline(cin,s);
	stringstream str(s);
	string word;
	while(str>>word){
		cout<<word<<" ";
	}
	return 0;
}
