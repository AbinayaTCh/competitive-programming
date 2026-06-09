#include<bits/stdc++.h>
using namespace std;
 map<char,int>m={{'(',1},{')',-1},{'{',2},{'}',-2},{'[',3},{']',-3}};
 string bracket(string s)
 {
    stack<char>st;
    for(long long i=0;i<s.length();i++)
    {
        if(m[s[i]]>0)
        {
            st.push(s[i]);

        }
        else 
        {
            if (st.empty())
            {
                return "NO";
            }
            if(m[s[i]]+m[st.top()]!=0)
            {
                return "NO";
            }
            
               st.pop();
            
        }
    }

        if( st.empty())
        {
             return "YES";
        }
        else
        {
            return "NO";
        }
    }

int main()
{
    long long n,c=0;
    
    cin>>n;
    while(n--)
    {
    string s;
    cin>>s;
cout<<bracket(s)<<endl;
    
}
}
