
    #include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1 && b==1 &&c==1)
    {
        cout<<3<<endl;
        return 0;
    }
    else if(a==1 && b==1 ||a==1 &&c==1||c==1 && b==1)
    {
        cout<<max(a+b+c,max(a*(b+c),(a+b)*c))<<endl;
        return 0;
    }
    cout<<max(a*b*c,max(a*(b+c),(a+b)*c))<<endl;
}
    
