#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c=0,s=0;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                c++;
            }
            else if(a[i]==1)
            {
                s++;
            }
        }
        if(c==0||(c>=2 && s==0))
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(c==1 || (c>=2 && s>=1))
        {
            cout<<"YES"<<endl;
        }
    }
}