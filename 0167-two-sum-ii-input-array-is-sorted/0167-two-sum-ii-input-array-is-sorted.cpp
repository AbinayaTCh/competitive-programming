#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        ll n=numbers.size();
        ll t=target;
    ll l=0,r=n-1;
    vector<int>ind;
    while(l<r)
    {
        if(numbers[l]+numbers[r]==t)
        {
            ind.push_back(l+1);
            ind.push_back(r+1);
            return ind;
        }
        else if(numbers[l]+numbers[r]<t)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return {};
    
    }
    
};