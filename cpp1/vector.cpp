#include<bits/stdc++.h>
using namespace std;
int main()
{
	/* code */
	vector<int> v;
	v.push_back(34);
	v.push_back(12);
	v.push_back(24);
	sort(v.begin(),v.end());
	v.pop_back();
	int l=(int)v.size();

	for (int i=0;i < l;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
