#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    int l,r;
    cin >> l >> r;
    vector<int> ::iterator it1,it2,it;
    it1 = v.begin(), it2 = v.begin();
    while(l--)it1++;
    while(r--)it2++;
    for(it = it1; it <= it2; it++)cout << *it << ' ';
    cout << endl;
    for(it = it2; it >= it1; it--)cout << *it << ' ';
}
/*

*/