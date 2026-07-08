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
        ll n;
        cin>>n;
        if(n%2!=0)
        {
            for(ll i=1;i<=n;i++)
            {
                cout<<7<<" ";
            }
        }
        else

        {
           
            
                cout<<2<<" "<<6<<" ";
            
            n-=2;
            for(ll i=1;i<=n;i++)
            {
                cout<<4<<" ";
            }
        


           


        }
        cout<<endl;
    }


    
    
      
    }
