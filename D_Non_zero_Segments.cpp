#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c=0,sum=0;
    cin>>n;
    vector<long long>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
unordered_set<long long >s;
s.insert(0);
for(int i=0;i<n;i++)
{ sum+=a[i];
    if(s.count(sum))
    {
        c++;
        s.clear();
        s.insert(0);
        sum=a[i];
    }
    s.insert(sum);

}
cout<<c<<endl;
}