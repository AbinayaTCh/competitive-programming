#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n,p=1;
    const long long m=1e9+7;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        p=(p*2)%m;
        
    }
    cout<<p<<endl;
}