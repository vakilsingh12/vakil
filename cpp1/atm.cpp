#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	double y,z;
	cin>>x>>y;
	if(x%5==0){
		if(y>x && 0.5+x<=y){
			z=y-x-0.5;
			cout<<z<<endl;
		}else{
			cout<<y<<endl;
		}
	}else{
		cout<<y<<endl;
	}
	
}
