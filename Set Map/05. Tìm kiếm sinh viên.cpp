#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    map<string,string> mp;
    int n; cin >> n;
    while(n--)
    {
        string x,t;
        cin >> x;
        cin.ignore();
        getline(cin,t);
        mp[x] = t;
    }
    int q; cin >> q;
    while(q--)
    {
        string temp; cin >> temp;
        if(mp.count(temp))
            cout << mp[temp] << endl;
        else
            cout << "NOT FOUND\n";
    }
}
/*

*/