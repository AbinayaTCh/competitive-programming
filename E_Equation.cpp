  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=1e18;
bool check(double mid,double c)
{
    if((mid)>=(c-mid*mid)*(c-mid*mid))
    return true;
else
return false;
}
void solve()
{double n;
    cin>>n;
    double lo=0,hi=sqrt(n);
    while(hi-lo>1e-6)
    {
        double mid=lo+(hi-lo)/2;
        if(check(mid, n))
        {
            hi=mid;
        }
        else
        {
            lo=mid;
        }
    }
   cout<<fixed<<setprecision(6)<<hi;

    

}
    
    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   

    
   

    
   solve();
    }
  
    

 

