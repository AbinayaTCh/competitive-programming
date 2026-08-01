  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;
void solve()
{
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<ll>a(m);
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
        
    }
   

    vector<ll>freq(26,0);
    vector<vector<ll>>b(n,vector<ll>(26,0));
    b[0][s[0]-'a']=1;
    for(ll i=1;i<n;i++)
    {
    for(ll j=0;j<26;j++)
    {
        b[i][j]=b[i-1][j];
    }
    b[i][s[i]-'a']++;
    }
    
    for(ll i=0;i<n;i++)
    {
        freq[s[i]-'a']++;
        
    }
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<26;j++)
        {
            freq[j]+=b[a[i]-1][j];
        }
    }
    for(ll j=0;j<26;j++)
    cout<<freq[j]<<" ";
cout<<endl;


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
  
    

 

