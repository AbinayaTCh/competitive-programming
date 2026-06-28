#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll r,c,a=0,b=0;
    cin>>r>>c;

    char s[r][c];
    for(long long i=0;i<r;i++)

    {
        for(long long j=0;j<c;j++)
        {

        
        cin>>s[i][j];
    }
}
    unordered_set<ll>st,ctr;
    for(long long i=0;i<r;i++)
    {
        ll ct=0;
        for(long long j=0;j<c;j++)
        {
            if(s[i][j]=='.')
            {
                ct++;
            }
            else
            {
                break;
            }
        }
        if(ct==c && a==i)
        {
            st.insert(i);
            a++;
        }

        else
        break;

    }
    for(long long i=0;i<c;i++)
    {
        ll ct=0;
        for(long long j=0;j<r;j++)
        {
            if(s[j][i]=='.')
            {
                ct++;
            }
            else
            {
                break;
            }
        }
        if(ct==r && b==i)
        {
            ctr.insert(i);
            b++;
        }
        else
        break;
    }
    b=c-1;
    a=r-1;
    for(long long i=c-1;i>=0;i--)
    {
        ll ct=0;
        for(long long j=0;j<r;j++)
        {
            if(s[j][i]=='.')
            {
                ct++;
            }
            else
            {
                break;
            }
        }
        if(ct==r && b==i)
        {
            ctr.insert(i);
            b--;
        }
        else
        break;
    }
    for(long long i=r-1;i>=0;i--)
    {
        ll ct=0;
        for(long long j=0;j<c;j++)
        {
            if(s[i][j]=='.')
            {
                ct++;
            }
            else
            {
                break;
            }
        }
        if(ct==c && a==i)
        {
            st.insert(i);
            a--;
        }
        else
        break;
    }
    for(long long i=0;i<r;i++)
    {
        for(long long j=0;j<c;j++)
        {
            if(st.find(i)==st.end() &&  ctr.find(j)==st.end())
            {
                cout<<s[i][j];
            }
            else
            {
                continue;
            }
        }
        cout<<endl;
    }

}
