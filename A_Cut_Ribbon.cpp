#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,m=0;
    cin>>n>>a>>b>>c;
    for(long long x=0;x*a<=n;x++)
    {
        for(long long y=0;y*b<=n;y++)
        {
            long long z=n-a*x-b*y;
            if(z%c==0 && z>=0)
            {
                z=z/c;
                m=max(m,z+x+y);
                
            }

        }
    }
    cout<<m<<endl;
}