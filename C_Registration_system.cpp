#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        if(m[s[i]]==0)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<s[i]<<m[s[i]]<<endl;
        }
        m[s[i]]++;
    
    }
}