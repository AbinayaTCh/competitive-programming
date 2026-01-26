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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        b=a;
        sort(b.begin(),b.end(),greater<int>());
        if(is_sorted(a.begin(),a.end(),greater<int>()))
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        int c=0,id=0;
        while(c<n && a[c]==b[c]) c++;
        id=c;
        while(id<n && a[id]!=b[c]) id++;
        reverse(a.begin()+c,a.begin()+id+1);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
