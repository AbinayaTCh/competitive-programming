#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x, y, a, b, c = 0;

        cin >> x >> y; 
        cin >> a >> b;
        if(y>x)
        {
            swap(x,y);
        }

        if(2*a <= b)
    c = (x + y) * a;
else
    c = y * b + (x - y) * a;
cout<<c<<endl;
    }
}
