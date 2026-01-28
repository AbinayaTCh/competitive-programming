#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ce=0,co=0;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                ce++;
            else
                co++;
        }
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]==1)
            {
                flag=true;
                break;
            }
        }
        if(co%2==0 && ce%2==0)
            cout<<"YES"<<endl;
        else if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
