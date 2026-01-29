#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    vector<int>a(n),b(n-1),c(n-2);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
for(int i=0;i<n-2;i++)
    {
        cin>>c[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    for(int i=0;i<b.size();i++)
    {
        if(a[i]!=b[i])
        {
            cout<<a[i]<<endl;
            break;
        }
        else
        {
            s++;
        }
    }
    if(s==n-1)
    {
        cout<<a[n-1]<<endl;
    }
    s=0;
    for(int i=0;i<c.size();i++)
    {
        if(c[i]!=b[i])
        {
            cout<<b[i]<<endl;
            break;
        }
        else
        {
            s++;
        }
    }
    if(s==n-2)
    {
        cout<<b[n-2]<<endl;
    }


}