#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long s = 1LL * n * (n + 1) / 2;

    if (s % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    long long half = s / 2;
    vector<int> a, b;

    
    for (int i = n; i >= 1; i--)
    {
        if (half >= i)
        {
            a.push_back(i);
            half -= i;
        }
        else
        {
            b.push_back(i);
        }
    }

    cout << a.size() << endl;
    for (int x : a) cout << x << " ";
    cout << endl;

    cout << b.size() << endl;
    for (int x : b) cout << x << " ";
    cout << endl;

    return 0;
}
