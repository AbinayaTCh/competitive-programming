#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        if(n<=3)
        {
            if(a*n<b)
            {
                cout<<a*n<<endl;
            }
            else
            cout<<b<<endl;
        }
        else{
            if(3*a<b)
            {
                cout<<n*a<<endl;
            }
            else
            {
                long long k=n%3;
                long long s=(n/3)*b;
                if(k*a<b)

{
    cout<<s+k*a<<endl;
}  
else
{
    cout<<s+b<<endl;
}          }
        }
    }
}