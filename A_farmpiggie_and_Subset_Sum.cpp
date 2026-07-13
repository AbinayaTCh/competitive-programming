#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    while(n--)
    {
        ll num;
        cin>>num;
        for(ll i=1;i<=num;i+=2)
        {
            cout<<i+1<<" "<<i; 
        if(i+1<num)
    cout<< " ";       }
            cout<<endl;

    }
}