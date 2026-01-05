#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  a,b,c,n;
        cin>>a>>b;
        n=abs(a-b);
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
    
        c=min(a%n,n-a%n);

        cout<<n<<" "<<c<<endl;
        
        

    }
}