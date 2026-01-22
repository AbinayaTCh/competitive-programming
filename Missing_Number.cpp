#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c;
    cin>>n;
    vector<long long> a(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<=n;i++)
    {
        if(a[i]!=i+1)
        {
            c=i+1;
            break;
            

        }
    }
    cout<<c<<endl;
}