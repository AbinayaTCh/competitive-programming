#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,c=0;
    cin>>n;
    map<char,long long >m={{'A',0},{'B',1},{'C',2},{'D',3},{'E',4}};
    char x;
    cin>>x;
    vector<string>s(n);
    for(long long i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(long long i=0;i<n;i++)
    {
        if(s[i][m[x]]=='o')
        {
            c=1;
            break;
        }

    }
    if(c)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
 }
