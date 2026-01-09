#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin >> n;
    

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = n; 
    for (int f = 1; f <= n; f++) {

        int rsum = 0;
        for (int i = 0; i < f; i++) {
            rsum += a[i];
        }

        int sum = 0;
        int cl= 0;
        int ml = f;
        bool v = true;

        
        for (int i = f; i < n; i++) {
            sum+= a[i];
            cl++;

            if (sum == rsum) {
                ml= max(ml, cl);
                sum = 0;
                cl = 0;
            } 
            else if (sum > rsum) {
                v= false;
                break;
            }
        }

    
        if (v && sum== 0) {
            ans = min(ans, ml);
        }
    }

    cout << ans << endl;
    }
}
