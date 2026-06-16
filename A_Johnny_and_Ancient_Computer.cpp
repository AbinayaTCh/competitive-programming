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
        long long c=0,d=0;
        while(a%2==0)
        {
            c++;
            a=a/2;

        }while(b%2==0)
        {
            d++ ; 
            b=b/2;
        }
        if(a==b)
        {
            cout<<(abs(d-c)+2)/3<<endl;
        }
        else
        cout<<-1<<endl;
    }
}