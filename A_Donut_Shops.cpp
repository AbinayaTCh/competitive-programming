#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a<c)
        {
            cout<<1<<" ";
        }
        else
        cout<<-1<<" ";
        if(a*b>c)
        {
            cout<<b<<" ";
        }
        else
        cout<<-1<<" ";
        cout<<endl;
    }
}