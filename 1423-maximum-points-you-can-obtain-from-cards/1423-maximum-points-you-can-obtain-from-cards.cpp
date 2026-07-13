#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<ll>s(cardPoints.size()),p(cardPoints.size());
        ll n=cardPoints.size();
        p[0]=cardPoints[0];
        s[0]=cardPoints[n-1];
      
        ll l=-1,r=k-1;
        for(ll i=1;i<n;i++)
        {
            p[i]=p[i-1]+ cardPoints[i];
        }
        ll i=1;
        for(ll j=n-2;j>=0;j--)
        {
            s[i]=s[i-1]+ cardPoints[j];
            i++;
        }
        ll ans=0;
        for(ll i=0;i<=k;i++)
        {
            if(l==-1)
            {

            
            ans=max(ans,s[r]);

        }
        else if(r==-1)
        {
            ans=max(ans,p[l]);
        }
        else
        {
            ans=max(ans,p[l]+s[r]);
        }
        l++;
        r--;


        
    }
    return ans;
    }
};