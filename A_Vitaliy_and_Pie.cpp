#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k=0;
    cin>>n;
    map<char,int>m;
    for(int i=0;i<2*n-2;i++)
    {
        char c;
        cin>>c;
        if(c>='a' && c<='z')
        {
        m[c]++;
        }
        else
        {
            if(m[c+32]>0)
            {
                m[c+32]--;
            }
            else
            {
                k++;
            }
        }
    }
    cout<<k<<endl;
}