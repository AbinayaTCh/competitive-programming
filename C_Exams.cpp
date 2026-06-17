#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,c=0;
    cin>>n;
    vector<pair<long long,long long>>a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());
    for(long long i=0;i<n;i++)
    {
       
        if(c<=a[i].second)
        c=a[i].second;
        else
        c=a[i].first;
    }
    cout<<c<<endl;
}
