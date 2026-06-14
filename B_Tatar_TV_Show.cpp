#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, k,c=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(long long i = 0; i < k; i++)
        {
            long long ct = 0;

            for(long long j = i; j < n; j += k)
            {
                if(s[j] == '1')
                    ct++;
            }

            if(ct % 2!=0)
            {
                c = 1;
                break;
            }
        }
        if(c)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
        

   