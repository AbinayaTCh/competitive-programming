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
 sort(a.begin(),a.end());
 long long s=0;
 long long l=0,r=n-1;
 while(l<n/2)
 {
    s+=a[n/2]-a[l];
    l++;
 }
    while(r>n/2)
    {
        s+=a[r]-a[n/2];
        r--;
    }
 cout<<s<<endl;

}