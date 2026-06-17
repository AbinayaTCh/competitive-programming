#include<bits/stdc++.h>
using namespace std;
long long child(long long n,long long k)
{
    if(n==1)
    return 1;
    if(n>=2*k)
    {
        return 2*k;

    }
    k-=n/2;
   
    
        if(n%2==0)
        {
            long long c=child(n/2,k);
            return 2*c-1;
        }
        else{
            long long c=child((n+1)/2,k);
            if(c==1)
            return n;
            else
            return 2*c-3;
        }
    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    { 
        long long n,k;
        cin>>n>>k;
    cout<<child(n,k)<<endl;

    }
}

