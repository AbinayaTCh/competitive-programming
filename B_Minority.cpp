#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        long long z=0,o=0;
        cin>>s;
        for(long long i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        if(z==o)
        {
            cout<<min(z,o)-1<<endl;
        }
        else
        {
            cout<<min(z,o)<<endl;
        }
    }
}