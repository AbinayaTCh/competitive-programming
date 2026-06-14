#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    for(long long i=0;i<s.length();i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            t+=s[i];
        }
    }
    cout<<t<<endl;
}