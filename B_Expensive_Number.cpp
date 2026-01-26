#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int id = -1, z = 0;

        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] != '0')
            {
                id = i;
                break;
            }
        }

        for(int i = 0; i < id; i++)
        {
            if(s[i] == '0')
                z++;
        }

        cout << s.size() - z - 1 << endl;
    }
}
