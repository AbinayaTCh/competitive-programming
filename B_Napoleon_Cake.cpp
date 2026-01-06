#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n+1,0);
    
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            int m=max(0,i-a[i]+1);
            b[m]++;
            b[i+1]--;
        }
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=b[i];
        if(s>0)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    cout<<endl;

        

        
    
}
}