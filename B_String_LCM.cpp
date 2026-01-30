#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string u,v,w,x;
        cin>>u>>v;
        int l=lcm(u.size(),v.size());
        while(!(l==w.size()))
        {
            w+=u;
        }
        while(!(l==x.size()))
        {
            x+=v;
        }
        if(w==x)

        {
            cout<<w<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }
}