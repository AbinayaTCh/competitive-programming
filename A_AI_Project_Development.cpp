#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x,y,z,t1,t2;
        cin>>n>>x>>y>>z;
        if(x*z>=n)
        {
            t1=(n+x-1)/x;

        }
        else
        {
            t1=z+((n-x*z)+(x+10*y)-1)/(x+10*y);
        }
        t2=(n+x+y-1)/(x+y);
        cout<<min(t1,t2)<<endl;
    }
}