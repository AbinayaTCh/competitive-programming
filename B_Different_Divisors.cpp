#include<bits/stdc++.h>
using namespace std;
bool prime(long long x)
{
    if (x<1)
    {
        return false;

    }
    for(long long i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
long long num (long long x)
{
    while(!prime(x)){
        x++;
    }
    return x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long d;
        cin>>d;
        long long p1= num(d+1); 
    
        long long p2=p1*p1*p1;
        long long p=num(d+1);
        long long q=num(p+d);
        cout<<min(p2,p*q)<<endl;
    }
    
}