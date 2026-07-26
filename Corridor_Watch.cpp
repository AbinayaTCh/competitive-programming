#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    unordered_set<ll>st;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]!='G')
        {
            ans++;
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='G')
        
        {
            ll k=i;
            k--;
            for(ll j=1;j<=d;j++)
            {
                  if(k==-1)
                break;


                if(s[k]!='G' && st.find(k)==st.end())
                {
                    ans--;
                    st.insert(k);
                }

                
                k--;
               



            }
            
            k=i;
            k++;
            for(ll j=1;j<=d;j++)
            {
                if(k==n)
                break;

                if(s[k]!='G' && st.find(k)==st.end())
                {
                    ans--;
                    st.insert(k);
                }
                
                k++;
                



            }
           

            
        }
        
    }
    cout<<ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   

    
   solve();
    }

    
