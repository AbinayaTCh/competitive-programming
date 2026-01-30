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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>b=a;
        sort(b.begin(),b.end());
        int m=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                m=min(m,max(abs(a[i]-b[0]),abs(a[i]-b[n-1])));
            }
        }
        if(m==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<m<<endl;
        }

    }
}