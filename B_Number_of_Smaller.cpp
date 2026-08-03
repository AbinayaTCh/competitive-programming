  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<m;i++)
    cin>>b[i];
ll l=0,ans=0;
for(ll i=0;i<m;i++)
{
    
   
    for(ll j=l;j<n;j++)
    {
        if(a[j]<b[i])
        {
            ans++;

        }
        else
        {
            break;
        }
        l++;

    }
    cout<<ans<<" ";
}
    

}

    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    
   

    
   

    
   solve();
    }



 

