#include<bits/stdc++.h>
using namespace std;
class polmorphism
{
public:
	void show(int x){
     cout<<x<<endl;
	}
	void show(double x){
		cout<<x<<endl;
	}
	
};
int main(){
	polmorphism p1;
	p1.show(30);
	p1.show(1.2);
}
