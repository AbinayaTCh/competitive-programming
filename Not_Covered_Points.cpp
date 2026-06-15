#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c=0;
    cin>>n;
    vector<pair<long long,long long>>x(n);
   
    for(long long i=0;i<n;i++)
    {
        cin>>x[i].first>>x[i].second;

    }
    sort(x.begin(),x.end());
    long long m=INT_MAX;
    for(long long i=0;i<n;i++)
    {
        if(x[i].second<m)
        {
            c++;
            m=x[i].second
;        }
    }
    cout<<c<<endl;
}
