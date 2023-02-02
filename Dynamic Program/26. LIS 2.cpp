#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, a[200005];
int main(){
    quick();
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> res;
    for(int i = 0; i < n; i++){
        auto it = lower_bound(res.begin(), res.end(), a[i]);
        if(it == res.end()){
            res.push_back(a[i]);
        }else{
            *it = a[i];
        }
    }
    cout << res.size();
}
/*

*/