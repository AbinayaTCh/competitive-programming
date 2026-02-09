#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c=0,d=0;
    cin>>a>>b;
    
    while(a>0)
    {
        d+=a;
        c+=a;
        a=c/b;
        c=c%b;
    }
    cout<<d<<endl;


}