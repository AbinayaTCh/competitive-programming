#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,c=1,count=0;
        cin>>n;
        string s;
        cin>>s;
        if(n%2!=0)
        {
            cout<<"No"<<endl;
            continue;
        }
        else
        {
            for(long long i=0;i<s.length();i++)
            {
                if(s[i]=='(')
                {
                    count++;

                }
                else
                {
                    count--;
                }
            }
            
            
                
            }
            if(!count)
            {
                cout<<"YEs"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
