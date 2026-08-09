 #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;
void merge(vector<ll>&a, ll low, ll mid, ll high) {
    vector<ll>temp(a.size());
    ll i = low, j = mid + 1, k = 0;

    while (i <= mid && j <= high) {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = temp[k];
}
void mergeSort(vector<ll>&a, ll low, ll high) {
    if (low < high) {
        ll mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}
void solve()
{ ll n;
    
 cin >> n;
vector<ll>a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    mergeSort(a, 0, n - 1);

    for (ll i = 0; i < n; i++)
        cout << a[i] << " ";

    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   

    
   

    
   

    
   solve();
    }