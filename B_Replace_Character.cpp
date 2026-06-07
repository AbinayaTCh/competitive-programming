#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,l=INT_MAX,r=0,d=0;
        cin>>n;
        string s;
        cin>>s;
map<char,int>mp;

        for(long long i=0;i<n;i++)
        {
            mp[s[i]]++;
        }

        char i,j;
        
        for(auto & it:mp)
        {
            if(it.second==n)
            {
                d=1;
            
            }
            if(it.second<l)
            {
                l=it.second;
                i=it.first;
            }
            if(it.second>r)
            {
                r=it.second;
                j=it.first;
            }
        }
        if(d)
        {
            cout<<s<<endl;
            continue;
        }
        long long id1,id2;
        if(i==j)
        {
            for(long long k=0;k<n;k++)
            {
                if(s[k]!=i)
                {
                    id1=k;
                    
                }
                else 
                {
                    id2=k;
 
                }
            }
            s[id2]=s[id1];
 
        }
        else
        {
 
        
        for(long long k=0;k<n;k++)
        {
            if(s[k]==i )
            {
                s[k]=j;
                break;
            }
            
        }
    }
        cout<<s<<endl;
    }
}
