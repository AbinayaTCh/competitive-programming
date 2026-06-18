#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long c=0,ans=0;
        vector<long long>a;
        for(long long i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            { c++;

            }
            else
            {
                if(c)
                {

                
                a.push_back(c);
                }
                c=0;
            }
        }
        if(c)
        {
            a.push_back(c);

        }
        sort(a.begin(),a.end(),greater<long long>());
        for (int i = 0; i < a.size(); i += 2)
        {

        
    ans += a[i];
        }
        cout<<ans<<endl;

    }}