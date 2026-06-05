#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        set<long long>s;
        for(long long i=0;i<n;i++)

{
    long long a;

    cin>>a;
    s.insert(a);
}
if(s.size()==1)
{
    cout<<0<<endl;
    continue;
}
auto it=(--s.end());
auto i=s.begin();
cout<<(*it-*i+1)/2<<endl;
    }
}