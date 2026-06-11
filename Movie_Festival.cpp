#include<bits/stdc++.h>
using namespace  std;
int main()
{
    long long n;
    cin>>n;
   vector<pair<long long,long long>>a;
   for(long long i=0;i<n;i++)
   {
    long long x,y;
    cin>>x>>y;
    a.push_back({y,x});
    
   }
   sort(a.begin(),a.end());
   
long long ans=1,i=1;
long long c=a[0].first;
   while(i!=n)

   {
    
    
    if(a[i].second>=c)
    {
        c=a[i].first;
        ans++;
    }
    i++;


    


   }
   cout<<ans<<endl;



}