#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,e=0,o=0;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=0;i<n;i++)
        {
            if((a[i]%2)!=i%2)
            {
                if(a[i]%2==0)
                {
                    e++;
                }
                else
                {
                    o++;
                }
            }
        
            
    }
    if(o!=e)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<o<<endl;
    }

}
}