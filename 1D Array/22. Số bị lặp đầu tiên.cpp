#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{ 
    quick();
    int n; cin >> n ;
    int a[n],res,kt = 0;
    set<int> se;
    for(int &x : a)
    {
        cin >> x;
        if(!kt)
            if(se.find(x) != se.end())
            {
                res = x;
                kt = 1;
            }
        se.insert(x);
    }
    if(kt)cout << res;
    else cout << "-1";
}