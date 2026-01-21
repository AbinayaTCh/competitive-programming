#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,k,m;
        cin>>s>>k>>m;
        if(s>k)
        {
            m=m%(2*k);
            if(m<=k-1)
            {
                cout<<s-m<<endl;
            }
            else 
            {
                cout<<k-(m-k)<<endl;
            }

        }
        else {

            m=m%k;
            if(m <s)
            {
                cout<<s-m<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        
        

        
        {


        }
    }
}