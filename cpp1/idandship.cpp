#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--){
		char ch;
		cin>>ch;
		if(ch=='B'||ch=='b'){
			cout<<"BattleShip"<<endl;
		}else if(ch=='C'||ch=='c'){
			cout<<"Cruiser"<<endl;
		}else if(ch=='D'||ch=='d'){
			cout<<"Destroyer"<<endl;
		}else if(ch=='F'||ch=='f'){
			cout<<"Frigate"<<endl;
		}
	}
	return 0;
}
