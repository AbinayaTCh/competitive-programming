#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];


        reverse(a.begin(), a.end());
        vector<long long> prefixSum(n + 1, 0);
        for(int i = 0; i < n; i++)
            prefixSum[i + 1] = prefixSum[i] + a[i];


        vector<long long> suffixMax(n);
        suffixMax[n - 1] = a[n - 1];
        for(int i = n-2; i>=0; i--)
            suffixMax[i] = max(a[i], suffixMax[i + 1]);

        
        for(int i = 0; i < n; i++)
        {
            long long s;
            
                s = prefixSum[i] + suffixMax[i]; 
        
        
            cout << s << " ";
        }
        cout << endl;
    }
}

