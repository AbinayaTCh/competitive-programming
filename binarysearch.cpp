  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;
bool check(ll mid,vector<ll>&a,ll x)
{
	if(a[mid]<x)
	{
		return false;
	}
	else
	return true;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	ll lo=0,hi=n-1;
	ll x;
	cin>>x;
	
	sort(a.begin(),a.end());
	while(lo<=hi)
	{
		ll mid=lo+(hi-lo)/2;
		if(check(mid,a,x))
		{
			if(a[mid]==x)
			
			{
				cout<<"Found at "<<mid;
				return;
				
			}
			else
			{
		hi=mid-1;
			
			}
			
		}
		else
		{
		lo=mid+1;
		}
		
	}
	cout<<"NOt found";


}
    
    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  

    
   

    
   

    
   solve();
    }

    

 

