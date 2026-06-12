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
        set<long long>s;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            s.insert(x);
        }
        if(s.size()==1)
        {
            cout<<n<<endl;
        }
        else
        cout<<1<<endl;
    }
}