#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,s=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                c++;
                a[i]=-a[i];
            }
            s=s+a[i];
        }
        sort(a.begin(),a.end());
        if(c%2!=0)
        {
            s=s-2*a[0];
        }
        cout<<s<<endl;
    }
}