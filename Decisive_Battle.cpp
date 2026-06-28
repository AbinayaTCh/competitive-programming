#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    ll e=0,w=0;
    cin>>s;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='E')
        {

        
        e++;
        }
        else
        w++;
    }
    if(e>w)
    cout<<"East";
    else
    cout<<"West";
}