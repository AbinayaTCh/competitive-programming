#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            cout<<a*b<<" "<<a<<" "<<a*(b+1)<<endl;
        }
    }
}