  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    vector<ll>a(5);
    ll c=0,d=0;
    for(ll i=0;i<5;i++)
    {
        cin>>a[i];
        if(a[i]>=30)
        c++;
    if(a[i]>=60)
    d++;
    }
    if(d>=2 &&c>=4)
    cout<<"Pass"<<endl;
else
cout<<"Fail"<<endl;
    
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while (t--)
    {

    
   

    
   solve();
    }
  }
    

