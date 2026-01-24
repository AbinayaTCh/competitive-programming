#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> a;
    a.push_back(n);

    
    for (long long i = 2; i <=n; i++)
    {
        while(n%i==0)
        {
            
            n=n/i;
            a.push_back(n);
        }
    }


    for (int i = 0; i < a.size(); i++)
    {
    cout<<a[i]<<" ";
    }

}
