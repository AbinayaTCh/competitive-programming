#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,c=1,p=0,i,j;
    cin>>n>>x;
    map<long long,long long>m;
    for(int i=1;i<=n;i++)  
    {
        long long a;
        cin>>a;
        if(m.count(x-a))
        {
            cout<<m[x-a]<<" "<<i<<endl;
            
        return 0;
        }
        m[a]=i;

    }
    if(c)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }

}