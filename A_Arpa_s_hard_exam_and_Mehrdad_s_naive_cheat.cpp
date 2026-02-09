#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }

    int a[] = {8, 4, 2, 6};
    cout <<a[(n - 1) % 4] << endl;
}
