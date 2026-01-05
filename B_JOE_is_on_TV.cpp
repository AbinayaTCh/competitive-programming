#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double s = 0.0;   

    while (n > 0)
    {
        s += 1.0 / n;
        n--;
    }

    cout <<fixed<< setprecision(12) << s << endl;
    return 0;
}
