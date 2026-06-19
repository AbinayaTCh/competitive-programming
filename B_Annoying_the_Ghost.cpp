#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--)
    {
        long long n, ans = 0,c=0;
        cin >> n;

        vector<long long> a(n), b(n);
        unordered_set<long long>s;
     for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }
   for(long long i = 0; i < n; i++)
        {
            long long id =n;
            for(long long j = i; j < n; j++)
            {
                if(a[j] <= b[i])
                {
                    id=j;
                    break;
                }
            }

            if(id==n)
            {
                c = 1;
                break;
            }

            ans += (id - i);
            for(long long j = id; j > i; j--)
            {
                swap(a[j], a[j - 1]);
          }
        }

        if(c)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

}

 