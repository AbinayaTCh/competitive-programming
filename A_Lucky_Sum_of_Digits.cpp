  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
     if(n%7==0)
    {
        ll c=n/7;
        while(c--)
        {
            cout<<7;        }
    }
    

    else
    {
        bool found=true;
        ll c,d;
        for(ll i=n/7;i>=0;i--)
        {
            if((n-i*7)%4==0)
            {
                d=i;
                c=(n-i*7)/4;
                found=false;
                break;

            }
        }
        if(found)
        cout<<-1;
    else
    {
        while(c--)
        cout<<4;
    while(d--)
    cout<<7;
    }

    }

    
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   

    
   solve();
    }

    

