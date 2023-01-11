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
    vector<int> ::iterator it;
    sort(v.begin(),v.end());
    for(it = v.begin(); it != v.end(); it++)cout << *it << ' ';
    cout << endl;
    reverse(v.begin(),v.end());
    for(it = v.begin(); it != v.end(); it++)cout << *it << ' ';
}
/*

*/