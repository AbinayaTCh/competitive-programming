#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);

    for (int i = 0; i < n; i++)
        cin >> h[i];

    int sum = 0;

    
    for (int i = 0; i < k; i++)
        sum += h[i];

    int m = sum;
    int id= 0;
    for(int i=k;i<n;i++)
    {
        sum=sum-h[i-k]+h[i];
        if(sum<m)
        {
            m=sum;
            id=i-k+1;
        }
    }


   

    cout <<id + 1 << endl;

}
