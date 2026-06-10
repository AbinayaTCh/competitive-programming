#include<bits/stdc++.h>
using namespace std;
vector<long long> nge(vector<long long>a)
{
    vector<long long>n((a.size()));
    stack<int>s;
    for(long long i=0;i<a.size();i++)
    {
        while((a[i]<a[s.top()]) && (!s.empty()))
        {
            n[s.top()]=i;
            s.pop();
        }
        s.push(i);

    }
    while(!s.empty())
    {
        n[s.top()]=-1;
        s.pop();
    }
    return n;
}
int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n),b(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
  b=nge(a);  
  for(long long i=0;i<n;i++)
  {
    if(b[i]==-1)
    {
        cout<<a[i]<<" "<<-1<<endl;
    }
    else
    {
        cout<<a[i]<<" "<<a[b[i]]<<endl;
    }
  }
}