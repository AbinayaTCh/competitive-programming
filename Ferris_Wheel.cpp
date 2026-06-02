#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,w,c=0,q=0;
    cin>>n>>w;
    long long p=n-1;
    vector<long long>a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    
    }
    sort(a.begin(),a.end());
   while(!(p<q))
   {
    if(a[p]+a[q]<=w)
    {
        c++;
        p--;
        q++;
    }
    else
    {
        c++;
        p--;
    }
     
    }
    cout<<c;
   }

