#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 long long t;
 cin>>t;
 while(t--)
 {
   ll x;
  cin >> x;

  ll num = 64 - __builtin_clzll(x);

 ll mask=(1ll<<num)-1;




  cout << (mask^x)<<endl;
}
 }