#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=n&(n-1);
	if(a==0){
		cout<<"power of 2"<<endl;
	}else{
		cout<<"power of not 2"<<endl;
	}
	return 0;
}
