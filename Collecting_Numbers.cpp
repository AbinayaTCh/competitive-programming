#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    map<long long,long long>m;
   
    long long c=0,a=0;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        m[x]=i;
    }
    for(long long i=1;i<n;i++)
    {
        if(m[i]<m[i+1])
        {
            
            continue;

        }
        else
        {
            c++;

        }
    }
    
    cout<<c+1<<endl;
}