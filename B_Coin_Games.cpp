#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            char ch;
            cin>>ch;
            if(ch=='U')
            {
                c++;
            }

        }
        if(c%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}