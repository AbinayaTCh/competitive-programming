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
        map<long long,long long>mp;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            mp[x]++;
        }
        long long ans=INT_MAX;
        long long left=0;
        
        for(auto & it:mp)
        {

            
            
            ans=min(ans,max(left,n-left-it.second));
            left+=it.second;            
        }
        cout<<ans<<endl;
        
}
}