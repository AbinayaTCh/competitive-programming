 #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;
 ll partition(vector<ll>& a, ll low, ll high) {
    ll pivot = a[high];
    ll i = low - 1;

    for (ll j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);

    return i + 1;
}




void quickSort(vector<ll>& a, ll low, ll high) {
    if (low < high) {
        ll p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

void solve()
{
    

   





    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    for (ll i = 0; i < n; i++)
        cout << a[i] << " ";
}

    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   

    
   

    
   

    
   solve();
    }

 
 

