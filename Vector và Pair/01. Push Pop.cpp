#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    vector<ll> v;
    int n;
    cin >> n;
    while(n--)
    {
        int x;cin >> x;
        if(x == 1)
        {
            ll k;cin >> k;
            v.push_back(k);
        }else{
            if(v.size())v.pop_back();
        }
    }
    if(!v.size())cout << "EMPTY";
    else 
        for(int x : v)cout << x << ' ';
}
/*

*/