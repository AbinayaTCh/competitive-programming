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
        long long n,m,c=0;
        
        cin>>n>>m;
        vector<vector<char>>a(n,vector<char>(m));
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                if(i+1==n && a[i][j]=='D' && j+1!=m)
                {
                    c++;
                }
                if(j+1==m && a[i][j]=='R' && i+1!=n)
                {
                    c++;
                }

            }
        }
        cout<<c<<endl;
    }
}
