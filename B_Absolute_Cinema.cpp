#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c=0;
        cin>>n;
        vector<long long>a(n),b(n);
        
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=0;i<n;i++)
        {
            cin>>b[i];
        }
        
    
for(long long i=0;i<n;i++)
        {
           
        
        if(a[i]>b[i] )
        {
            swap(a[i],b[i]);
        }
    }
        c+=*max_element(a.begin(),a.end());
        for(long long i=0;i<n;i++)
        {
            c+=b[i];
        }
        cout<<c<<endl;

    }
}