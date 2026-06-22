#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0,mi,m;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
      set<ll>st;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='g')
            {
                st.insert(i);

            }
        }
        if(c=='g')
        {
            cout<<0<<endl;
            continue;

        }
        
       mi = *st.begin();

       for (ll i = 0; i < n; i++) {
    
        if (s[i] == c) {
        auto it = st.lower_bound(i);
       if (it != st.end()) {
            ans = max(ans, *it - i);
        } else {
            ans = max(ans, n - i + mi);
        }
    }
}
        cout<<ans<<endl;

    }
}