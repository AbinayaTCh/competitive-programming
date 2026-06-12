 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {

    
	long long  n, k;
	cin >> n >> k;
	string s;
	cin >> s;
 
	vector<long long > o(n + 1);
	vector<long long> c(n + 1);
 
	for (int i = 0; i < n; i++){
        if(s[i]=='(')
        {
		o[i + 1] = o[i] +1;
         c[i+1]=c[i];
        }
        else
        {
            c[i + 1] = c[i] +1;
         o[i+1]=o[i];
        }
    }
 
	long long t = c[n];
 
	long long pos = n;
	for (int i = 0; i < n; i++){
		if (o[i] + t - c[i] <
			o[pos] + t - c[pos]){
				pos = i;
		}
	}
 
	string ans(n, '0');
	for (int i = 0; i < pos; i++){
		if (k > 0 && s[i] == '('){
			ans[i] = '1';
			k--;
		}
	}
	for (int i = pos; i < n; i++){
		if (k > 0 && s[i] == ')'){
			ans[i] = '1';
			k--;
		}
	}
 
	cout << ans << endl;
}
}