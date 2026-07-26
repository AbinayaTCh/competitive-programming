  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll l,r,a;
    cin>>l>>r>>a;
    ll k=r-(r%a)-1;
    if(k>=l && k<=r)
    {
        cout<<max(k%a+k/a,r%a+r/a)<<endl;
    }
    else
    cout<<r%a+r/a<<endl;
    
    
    
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
    

