#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,q;
        cin>>n>>q;
        vector<long long> a(n),s(n);
        
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        s[0]=a[0];
        for(long long i=1;i<n;i++)
        {
            s[i]=s[i-1]+a[i];
        }
        for(long long i=0;i<q;i++)
        {
            long long l,r,k;
            cin>>l>>r>>k;

            long long removed;
            if(l==1)
                removed = s[r-1];
            else
                removed = s[r-1] - s[l-2];

            if((s[n-1] - removed + (r-l+1)*k) % 2 != 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
