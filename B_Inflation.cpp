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
        long long n,k,i=1;
        cin>>n>>k;
        vector<long long>a(n);
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long sum=a[0];
        long long ans=0;
        n--;
        while(n--)
        {
            if(a[i]<=0.01*k*sum){
                sum+=a[i];
            }
            else
            {              
    long long c=(a[i]*100 + k - 1)/k;
              ans+=c-sum;
                sum=c;
                sum+=a[i];
            }
         i++;
       }
        cout<<ans<<endl;

    }}