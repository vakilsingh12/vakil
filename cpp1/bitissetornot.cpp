#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool a=n&(1<<2);
	if(a){
		cout<<"yes,bit is set"<<endl;
	}else{
		cout<<"bit is not set"<<endl;
	}
	return 0;
}
