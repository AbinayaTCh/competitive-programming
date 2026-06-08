#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if((a%2!=0)&& (b%2!=0))
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"YEs"<<endl;
        }
    }
}