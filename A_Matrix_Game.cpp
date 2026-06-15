#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,m,ct=0;
        cin>>n>>m;
        vector<vector<long long>>v(n,vector<long long>(m));
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                cin>>v[i][j];
            }
        }
        set<long long>r,c;
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {

            
    
         if(v[i][j]==1)
                {
                    c.insert(j);
                    r.insert(i);
                }
            }
        }
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                if((v[i][j]==0)&& (r.find(i)==r.end() && c.find(j)==c.end()))
                {
                    ct++;
                c.insert(j);
                r.insert(i);
                }
                
              
            }
        }
        if(ct%2==0)
        {
            cout<<"Vivek"<<endl;
        }
        else
        cout<<"Ashish"<<endl;

    }
}