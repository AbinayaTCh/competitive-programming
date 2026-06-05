#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long reach=0;
    sort(a.begin(),a.end());
    for(long long i=0;i<n;i++)
    {
        if(a[i]>reach+1)
        {
        
            break;
        }
        else
        {
            reach+=a[i];
        }
    }
    cout<<reach+1<<endl;
}