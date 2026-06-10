#include<bits/stdc++.h>
using namespace  std;
int main()
{
    long long n;
    cin>>n;
    multiset<long long>s;
    unordered_multiset<long long>a,b;
    for(long long i=0;i<n;i++)
    {
        long long c,d;
        cin>>c>>d;
        s.insert(c);
        s.insert(d);
        a.insert(c);
        b.insert(d);
    }
    long long c=0,m=0;
    for(auto & it:s)
    {
        if(a.find(it)!=a.end())
        {
            c++;

        }
        else
        {
            m=max(m,c);
            c--;
        }
    }
    cout<<m<<endl;


}