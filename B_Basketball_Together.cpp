#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, c = 0;
    cin >> n >> d;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int j = n - 1;
    int i = 1;

    while (i <= n && j >= 0)
    {
        if (a[j] * i > d)
        {
            c++;
            j--;
            n -= i;
            i = 1;
        }
        else
        {
            i++;
        }
    }

    cout << c << endl;
}
