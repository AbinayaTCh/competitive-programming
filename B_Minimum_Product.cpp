#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y,n,r1,r2;
        cin>>a>>b>>x>>y>>n;
long long c,d,e=n;
c=a,d=b;
        
        
          
         c-=min(a-x,n);
            n-=min(a-x,n);

            
            d-=min(b-y,n);
            n-min(b-y,n);
r1=c*d;
n=e;

            
        
        
        
            long long t1=min(b-y,n);
        b-=t1;
            n-=t1;

            long long t2=min(a-x,n);
            a-=t2;
            n-=t2;

            r2=a*b;
        
        cout<<min(r1,r2)<<endl;
    }
}