#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    
    
vector<int>p(s.size(),0);
for(int i=1;i<s.size();i++)
{
    p[i]=p[i-1];
    if(s[i]==s[i-1])
    {
        p[i]++;
    }
}
int n;
cin>>n;

    for(int i=0;i<n;i++)
    {
        
        int l,r;
        cin>>l>>r;
    
        cout<<p[r-1]-p[l-1]<<endl;
    }
}