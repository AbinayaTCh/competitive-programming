#include <bits/stdc++.h>
using namespace std;
int main(){
    

    int t;  
    cin >> t;

    while (t--) {
        int h, l, n;
        cin >> n>> h>> l;

        int A = 0, B = 0, C = 0;  

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

        

            if (1 <= x && x <= h && 1 <= x && x <= l)
                C++;      
            else if (1 <= x && x <= h)
                A++;      
            else if (1 <= x && x <= l)
                B++;     
        }

        int total = A + B + C;

     cout<<min({ total / 2, A + C, B + C })<<endl;

        
    }
}
