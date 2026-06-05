#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	map<long long ,multiset<string>>m;
	for(long long i=0;i<n;i++)
	{
		long long a;
		string s;
		cin>>s>>a;
		m[-1*a].insert(s);
	}
	for(auto & it:m)
	{
		long long marks=-1*(it.first);
		auto & pt=it.second;
		for(auto & ptr:pt)
		{
			cout<<ptr<<" "<<marks<<endl;
		}


	}
}