#include <bits/stdc++.h>
using namespace std;

bool taxi(string s){
    for(char c : s)
       { if(c != '-' && c != s[0]) return false;}
    return true;
}

bool pizza(string s){
    return (s[0]-'0' > s[1]-'0' &&
            s[1]-'0' > s[3]-'0' &&
            s[3]-'0' > s[4]-'0' &&
            s[4]-'0' > s[6]-'0' &&
            s[6]-'0' > s[7]-'0');
}

int main(){
    int n; 
    cin >> n;

    map<string,int> t, p, g;
    vector<string> names;

    while(n--){
        int s; string name;
        cin >> s >> name;
        names.push_back(name);

        while(s--){
            string num; 
            cin >> num;
            if(taxi(num)) t[name]++;
            else if(pizza(num)) p[name]++;
            else g[name]++;
        }
    }

    int mt = 0, mp = 0, mg = 0;
    for(string name : names){
        mt = max(mt, t[name]);
        mp = max(mp, p[name]);
        mg = max(mg, g[name]);
    }

    cout << "If you want to call a taxi, you should call: ";
    int  f = 1;
    for(string name : names)
        if(t[name] == mt){
            if(!f) cout << ", ";
            cout << name;
            f = 0;
        }
    cout <<'.'<< endl;

    cout << "If you want to order a pizza, you should call: ";
    f = 1;
    for(string name : names)
        if(p[name] == mp){
            if(!f) cout << ", ";
            cout << name;
            f = 0;
        }
        cout<<'.';
    cout <<endl;

    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    f = 1;
    for(string name : names)
        if(g[name] == mg){
            if(!f) cout << ", ";
            cout << name;
            f = 0;
        }
    cout<<'.' << endl;
}
