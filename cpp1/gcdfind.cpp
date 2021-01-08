#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"simple way gcd "<<__gcd(a,b)<<endl;
	cout<<"Euclid thorem "<<gcd(a,b)<<endl;
	return 0;
}
