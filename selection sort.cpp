 #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;
void solve()
{
     ll n;
    cin >> n;

    ll a[n];

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 0; i < n - 1; i++) {
        ll minIndex = i;

        for (ll j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        swap(a[i], a[minIndex]);
    }

    for (ll i = 0; i < n; i++)
        cout << a[i] << " ";

}

    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   

    
   

    
   

    
   solve();
    }

 
 

