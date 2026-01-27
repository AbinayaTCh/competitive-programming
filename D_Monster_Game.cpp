#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long >a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        long long  r=0,sword=0;
        sort(a.begin(),a.end());
        for(int i=1;i<=n;i++)
        {
            sword+=b[i-1];
            if(sword>n)
            {
                break;
            }
        
            r=max(r,a[n-sword]*i);
        }
        cout<<r<<endl;
    }
}