#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        int max_mex = 0;

        for(int i = 0; i < n; i++) {
            long long shift = -a[i];  
            int mex = 0;
            long long last = LLONG_MIN;

            for(int j = i; j < n; j++) {
                long long val = a[j] + shift;
                if(val < 0) continue;   
                if(val == last) continue; 
                if(val == mex) {  
                    mex++;
                    last = val;
                } else if(val > mex) { 
                    
                    break;
                }
            }
            max_mex = max(max_mex, mex);
        }

        cout << max_mex << endl;
    }
}
