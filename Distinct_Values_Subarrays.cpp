#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    vector<long long>a(n);
    unordered_set<long long>s;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
       
    }
    long long l=0,r=0;
    long long ans=0;
    

    while(l!=n)
    {
        if(s.find(a[r])==s.end())
        {
            s.insert(a[r]);
            r++;
        }
        else
        {
            ans+=s.size();
            s.erase(a[l]);
            l++;
           
        }
        if(r==n)
        {
            ans+=s.size();
            s.erase(a[l]);
            l++;
            r=n-1;
        }

    }
    cout<<ans<<endl;



}
