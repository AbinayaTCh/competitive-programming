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
        if((n%2!=0)||n==2)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(n%6==0)
            {
                cout<<n/6<<" ";
            }
            else
            {

            
            cout<<(n/6)+1<<" ";
            }
            cout<<n/4<<endl;
        }
    }
}
