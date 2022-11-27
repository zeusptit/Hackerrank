#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main() {
    quick();
    int n;
    cin >> n ;
    vector<int> v(n);
    for(int &x : v)cin >> x;
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(v[i] > max){
            cout << v[i]<<" ";
            max = v[i];
        }
    }
}