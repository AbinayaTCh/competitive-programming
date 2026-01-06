#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) { 
            cin >> a[i];
        }

        int ma = 0; 

        
        for(int i = n - 1; i >= 0; i--) {
            if(i + a[i] < n) {
                a[i] = a[i] + a[i + a[i]];  
            }
    
            ma = max(ma, a[i]);
        }

        cout << ma << endl;
    }
}
