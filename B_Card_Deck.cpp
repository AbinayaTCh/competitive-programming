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
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]=0;


        }
        vector<int>c;
        b=a;
        sort(b.begin(),b.end(),greater<int>());
        int j=0;
       for(int i = n-1; i >= 0; i--) {
    if(a[i] != b[j]) {
        c.push_back(a[i]);
        m[a[i]] = 1;
    }
    else {
        c.push_back(a[i]);
        m[a[i]] = 1; 


        for(int k = c.size()-1; k >= 0; k--) {
            cout << c[k] << " ";
        }

        
        while(j < n && m[b[j]] == 1) {
            j++;
        }
        c.clear(); 
}

        }
        cout<<endl;
}
}