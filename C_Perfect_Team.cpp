#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,x;
        cin>>a>>b>>x;
       long long lo=0,hi=min(a,b),mid,ans=0;
       while(lo<=hi)
       {
        mid =(lo+hi)/2;
        if(a+b+x-2*mid>=mid)
        {
            ans=mid;
             lo=mid+1;

        }
        else
        {
            hi=mid-1;
           
        }


        
       }
       cout<<ans<<endl;
    }
}
