#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<ll> p(n);
        
        p[0] = nums[0];
        for (ll i = 1; i < n; i++) {
            p[i] = p[i - 1] + nums[i];
        }

        ll totalSum = p[n - 1];

        for (int i = 0; i < n; i++) {
            ll leftSum = 0;
            if (i > 0) {
                leftSum = p[i - 1];
            }

            ll rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }
        }

        return -1;
    }
};