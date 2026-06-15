#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++)

{
    cin>>a[i];

}
multiset<long long>s;
long long c=0;
for(long long i=0;i<n;i++)
{
    if(s.upper_bound(a[i])==s.end())
    {
        s.insert(a[i]);
        c++;
    }
    else
    {
        s.erase((s.upper_bound(a[i])));
        s.insert(a[i]);
    }
}
cout<<c<<endl;
}