  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;
void solve()
{
    int n;
    cin >> n;
vector<int> a(n);
   for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "Found at index " << i;
            return ;
        }
    }

    cout << "Not found";
   

	

}
    
    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   

    
   

    
   solve();
    }

    

 

