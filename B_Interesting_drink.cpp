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
    sort(a.begin(),a.end());    
    long long q;
    cin>>q;
    vector<long long>m(q),p(q);
    for(long long i=0;i<q;i++)
    {
        cin>>m[i];

        
    }


    for(long long i=0;i<q;i++)
    {
        cout<<upper_bound(a.begin(),a.end(),m[i])-a.begin()<<endl;

}

}