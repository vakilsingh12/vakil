#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if(n%2==0){
		int a=n&(n-1);
    if(a==0){
    	cout<<"Number is power of 2"<<endl;
    }
	}else{
		cout<<"number is not a power of 2"<<endl;
	}
	return 0;
}
