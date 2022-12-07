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
    multiset<int> se;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    int q; cin >> q;
    while(q--)
    {
        int t,x;
        cin >> t >> x;
        if(t == 1)
            se.insert(x);
        else if(t == 2)
        {
            auto it = se.find(x);
            if(it != se.end())
                se.erase(it);
        }
        else if(t == 3)
        {
            auto it = se.lower_bound(x);
            if(it != se.end())
                cout << (*it) << endl;
            else
                cout << -1 << endl;
        }
        else if(t == 4)
        {
            if(*se.begin() > x)cout << "-1\n";
            else{
                auto it = se.lower_bound(x);
                while(*it > x)it--;
                cout << *it << endl;
            }
        }
    }
}
/*

*/