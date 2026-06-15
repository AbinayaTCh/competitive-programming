#include <bits/stdc++.h>
using namespace std;
int main()
{   long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
unordered_set<long long> s;
vector<long long >a(n*2);
for(long long i=0;i<2*n;i++)
{
    cin>>a[i];
}
for(auto & it:a)
{
    if(s.find(it)==s.end())
    {
        cout<<it<<" ";
        s.insert(it);
    }
}
cout<<endl;


   
}
}