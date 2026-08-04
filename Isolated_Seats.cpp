// Hare Krishna Hare Krishna, Krishna Krishna Hare Hare _/\_ _/\_
// Hare Rama Hare Rama, Rama Rama Hare Hare _/\_ _/\_
 

#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
#define int                long long 
#define double             long double
#define FAST               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

const double pi = 3.14159265359;
const int mod = 1000000007;
const int modc = 998244353;
const int inf = LLONG_MAX;
const int neginf = LLONG_MIN;
 


 
//BINARY EXPONENTIATION(I HOPE SPELLING IS CORRECT)
int inline power(int a, int b, int p){
    a %= p;
    int ans = 1;
    while(b>0){
        if(b & 1)
            ans = (ans*a)%p;
        a = (a*a)%p;
        b >>= 1;
    }
    return ans;
}
 
//MOD INVERSE (ONLY WORKS WHEN P IS PRIME)
int mod_inv(int n, int p){
    return power(n,p-2, p);
}
 

const int M = 3e5 + 5;
 
//SIEVE IN O(N) TIME (FOR N UPTO 1e7 OTHERWISE YOU'LL FACE MEMORY ISSUES)
/*
vector<int>lp(M);
vector<int>pr;
void sieve()
{
	lp[0] = 1; //AISE HI RANDOM , KUCHH BHI.
 
	for(int i = 2 ; i < M ; i++)
	{
		if(lp[i] == 0)
		{
			//this is a prime
			lp[i] = i;
			pr.push_back(i);
		}
		for(int j = 0 ; j < (int)pr.size() && pr[j] <= lp[i] && i * pr[j] < M; j++)
			lp[i * pr[j]] = pr[j];
	}
}
*/
 

 
void solve()
{ int  n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
for(int i=1;i<n-1;i++)
{
    if(s[i]=='x' && s[i-1]=='x' && s[i+1]=='x')
    {
        ans++;
       
    }
}
if(n==1)
{
    if(s[0]=='x')
    {
        ans++;
    }
}
if(s[0]=='x' && s[1]=='x')
{
    ans++;
	
}
if(s[n-1]=='x' && s[n-2]=='x')
{
    ans++;
    
}
cout<<ans;
}
int32_t main()
{
	FAST;
	
	
	
		solve();
	
	}
