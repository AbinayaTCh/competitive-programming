  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool check=false;
    for(ll i=1;i<n;i++)
    {
        if(abs(a[i]-a[i-1])<=1)
        {
            check=true;
            break;
        }

    }
    if(check)
    {
        cout<<0<<endl;
    }
    else
    {for(ll i=0;i<n-2;i++)
        {
            if(a[i]>=min(a[i+1],a[i+2]) && a[i]<=max(a[i+1],a[i+2]))
            {
                cout<<1<<endl;
                return;
            }
            if(a[i+2]>=min(a[i],a[i+1]) && a[i+2]<=max(a[i],a[i+1]))
            {
                cout<<1<<endl;
                return;
            }
        }
        cout<<-1<<endl;
    
    
       

        
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


 

