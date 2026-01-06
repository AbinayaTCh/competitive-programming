#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s,t;
        cin>>s>>t;
        long long p=1;
        

        
        
            if(count(t.begin(),t.end(),'a')==t.length()) 
            {
    cout<<1<<endl;
            }
            else if(count(t.begin(),t.end(),'a')>=1 )
            {
                cout<<-1<<endl;
            }

        
        else
        {
            for(int i=1;i<=t.length();i++)
            {
                p=p*2;
                
            }
            cout<<p<<endl;
            
        }
        
    }
}