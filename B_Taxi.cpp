#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c[4]={0,0,0,0}, s=0;
    cin >> n;
    vector<long long> a(n);

    for(long long i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1) c[0]++;
        if(a[i]==2) c[1]++;
        if(a[i]==3) c[2]++;
        if(a[i]==4) c[3]++;
    }


    s += c[3];

    
    s += c[2];
    c[0] = max(0LL, c[0] - c[2]);

    
    s += c[1] / 2;
    c[1] %= 2;

    
    if(c[1])
    {
        s++;
        c[0] = max(0LL, c[0] - 2);
    }

    
    if(c[0] > 0)
    {
        s += (c[0] + 3) / 4;
    }

    cout << s << endl;
}
