#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m=0;
        cin>>n>>k;
        vector<int>a(n),b(n),s(k);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int sum=0,soln=0;
                for(int i=0;i<min(n,k);i++)
        {
            sum+=a[i];
            m=max(m,b[i]);
            s[i]=sum+(k-i-1)*m;
            
            
        }
        for(int i=0;i<min(n,k);i++)
        {
            soln=max(soln,s[i]);
        }
        cout<<soln<<endl;
    }
}