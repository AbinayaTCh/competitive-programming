#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        long long  n,c=0;
        cin >> n;
        
    vector<long long>a(n);
        
        for(int i = 0; i < n; i++)
        {
            
            cin >>a[i];
            if(a[i]== 67)
            c=1;
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
}
