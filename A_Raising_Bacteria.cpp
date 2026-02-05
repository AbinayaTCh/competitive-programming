#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    int cnt = 0;
    while(x > 0)
    {
        if(x % 2 == 1)
        {
            cnt++;
        }
        x = x / 2;
    }

    cout << cnt << endl;
}
