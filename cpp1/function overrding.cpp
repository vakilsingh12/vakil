#include<bits/stdc++.h>
using namespace std;
class student
{
public:
	virtual void fun(int y){
     cout<<"student class"<<endl;
	}
	
};
class Derived :public student
{
public:
	 virtual void fun(int x) override {
		cout<<"derived class"<<endl;
	}
	
};
int main()
{
	// student *s=new Derived();
	// s->fun(10);
	Derived d;
	student &b=d;
	b.fun(10);
	return 0;
}
