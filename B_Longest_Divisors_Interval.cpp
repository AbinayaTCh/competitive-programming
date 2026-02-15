#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%2!=0)
        {
            cout<<1<<endl;
        }
        else
        {
            int a=2;
            while( n%a==0)
            {
                a++;
            }
            cout<<a-1<<endl;
        }
    }
}