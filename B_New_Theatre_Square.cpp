#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,ct=0;
        cin>>n>>m;
        ll x,y;
        cin>>x>>y;
        vector<vector<char>>a(n,vector<char>(m));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='.')
                {
                    ct++;
                }

            }
        }
        if(2*x<y)
        {
           
            cout<<ct*x<<endl;
        }
        else
        {
        

        ll c = 0;
      for (ll i = 0; i < n; i++)
      {
         for (ll j = 0; j < m-1; j++)
         {
            if ( a[i][j] == '.' && a[i][j + 1] == '.')
             {
                c++;
                ct -= 2;
                j++;          
            }
         }
     }

    
     cout<<c*y + ct*x<<endl;
        }
            
        }
    }
