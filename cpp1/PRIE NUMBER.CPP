#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i = 2; i <= n; ++i)
	{
		int count=0;
		int x=i;
		for(int j=1;j<=x;j++){
			if(x%j==0){
				count++;
			}
		}
		// yaha check krenga ki ye divisor 2 hona hi chheya
		if(count==2){      
			cout<<x<<endl;
		}
	}

}