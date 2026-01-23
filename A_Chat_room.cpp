#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,r="";
cin>>s;
long long c=0;
set<char>st={'h','e','l','o'};
for (char c:s)
{
    if(st.find(c)!=st.end())
    {
        r+=c;
    }
}
long long n=r.find('h');
for(int i=n+1;i<r.length();i++)
{
    if(r[i]=='e')
    {
        n=i;
        
        c++;
        break;
    }
}
for(int i=n+1;i<r.length();i++)
{
    if(r[i]=='l')
    {
        n=i;
        c++;
        break;
        
    }
}
for(int i=n+1;i<r.length();i++)
{
    if(r[i]=='l')
    {
        n=i;
        c++;
        break;
    }
}
for(int i=n+1;i<r.length();i++)
{
    if(r[i]=='o')
    {
        n=i;
        c++;
        break;
    }
}
if(c==4)
{
    cout<<"YES"<<endl;
}
else 
{
    cout<<"NO"<<endl;
}


}