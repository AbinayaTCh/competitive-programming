#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,k,q,c=0,ans=0;
        cin>>n>>k>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=q)
            {
                a[i]=1;
            }
            else
            {
                a[i]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                c++;
            }
            else{
            if(c>=k)
            {
                ans+=(c-k+1)*(c-k+2)/2;
            }
            c=0;
            }
        }
        if(c>=k)
        {
            ans+=(c-k+1)*(c-k+2)/2;
        }
        cout<<ans<<endl;


    }
}