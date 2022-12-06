#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n];
    map<int,int> mp;
    set<int> se;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(auto it : mp) se.insert(it.second);
    if(se.size() > 2)
    {
        cout << "NO";
        return 0;
    }
    if(se.size() == 2)
    {
        auto it = se.begin();
        int x1 = *it;
        it++; int x2 = *it;
        int freq1 = 0,freq2 = 0;
        for(auto it : mp)
        {
            if(it.second == x1)
                freq1++;
            if(it.second == x2)
                freq2++;
        }
        if(x1 == 1 && freq1 == 1)
        {
            cout << "YES";
            return 0;
        }
        if(x2 - x1 > 1 || freq1 < freq2 || freq2 > 1)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}
/*

*/