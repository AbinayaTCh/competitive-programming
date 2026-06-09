#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--)
{
    long long n,a,c;
    cin>>n;
    if(n%12<=9)
    {
        cout<<n%12<<" "<<(n-n%12)<<endl;
    }
    else if(n%12==11)
    {cout<<11 <<" "<<(n-11)<<endl;
    }
    else if(n%12==10)
    {
        if(n<22)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<22<<" "<<n-22<<endl;
        }
    }
    
}
}