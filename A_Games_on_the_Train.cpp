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
        auto it=s.begin();
    auto i=s.end();
    i--;
    cout<<*i-*it+1<<endl;

}
}