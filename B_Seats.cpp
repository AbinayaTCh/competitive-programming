#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n<=2)
        {
            cout<<1<<endl;
            continue;
        }
        if(s[0]=='0'&& s[1]=='0')
        {
            s[1]='1';

        }
         if(s[n-1]=='0'&& s[n-2]=='0')
        {
            s[n-2]='1';
            
        }
        int c=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i-p>=3)
                {
                    c++;
                    s[i]='1';
                    p=i;
                }
            }
            else
            {
                c++;
                p=i;
            }
        }
        cout<<c<<endl;


    
    }
}
