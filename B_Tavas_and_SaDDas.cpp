#include<bits/stdc++.h>
using namespace std;
int main()
{ int id=0;
    string n;
    cin>>n;
    queue<string>q;
    q.push("4");
    q.push("7");
    while(!q.empty())
    {
        string a=q.front();
        q.pop();
        id++;
        if(a==n)
        {
            cout<<id<<endl;
            break;
        }
        q.push(a+"4");
        q.push(a+'7');
    }
}