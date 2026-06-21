#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ans=~0;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            if(x!=i)
            {
                ans&=x;

            }
        }
        cout<<ans<<endl;
    }
}