#include<bits/stdc++.h>
using namespace std;
bool findarray(int arr,int x,int k,int size){
for (int i = 0; i < size; i=i+k)
{
	int j;
	for (int j= 0; j <k; ++j)
	{
		if (i+j==x)
		{
			
		}
	}
}
}
int main()
{
	  int a[]={3,5,2,4,9,3,1,7,3,11,12,3};
	  int x=3;
	  int k=3;
	  int n=sizeof(a)/sizeof(a[0]);
	  if(findarray(arr,x,k,n)){
	  	cout<<"yes"<<endl;
	  }else{
	  	cout<<"no"<<endl;
	  }
}
