#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    float h,w;
    cin>>h>>w;
    h=h*0.01;
    float   ans=(w/h);
    ans/=h;
    if(ans<25)
    cout<<"No"<<endl;
     else 
     cout<<"Yes";
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    
}
     