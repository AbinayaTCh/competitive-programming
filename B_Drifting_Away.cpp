  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin>>s;
    bool check=false;
    for(ll i=0;i<s.size()-1;i++)
    {
        if((s[i]=='*'&& s[i+1]=='*')||(s[i]=='*'&& s[i+1]=='<')||(s[i]=='>'&& s[i+1]=='*')||(s[i]=='>'&& s[i+1]=='<'))
        {
            check=true;
        }
    }
    if(check)
    {
    cout<<-1<<endl;
    return;
}
else
{
    ll c1 =0,c2=0,c3 =0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='*')
        c1++;
    else if(s[i]=='<')
    c2++;
else
c3++;
    }
    cout<<max(c1+c2,c1+c3)<<endl;
}

    
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {

    
   

    
   solve();
    }
}
    

