#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
    long long n,id,c=0;
        cin>>n;
        vector<long long>a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            id=i;
            while(id%2==0)
            {
                id=id/2;
            }
            while(a[i]%2==0)
            {
                a[i]=a[i]/2;
            }
            if(id!=a[i])
            {
                c=1;

            }

        }
        if(c)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
       
}
}
