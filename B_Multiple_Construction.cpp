#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,c=2;
        cin>>n;
        vector<long long>a(2*n+1);
        a[1]=n;
        a[1+n]=n;
        
        for(long long i=n-1;i>=1;i--)
        {
            if(a[c+i*1]==0)
            {
                a[c+i*1]=i;
                a[c]=i;
            }
            else
            {
                a[c+i*2]=i;
                a[c]=i;
            }
            c++;
           

        }
for(long long i=1;i<=2*n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;


    }
}