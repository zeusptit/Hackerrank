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
    for(int &x : a) cin >> x;
    int dp[n + 1] = {0};
    dp[0] = a[0];
    for(int i = 0; i < n; i++){
        dp[i] = a[i];
        for(int j = 0; j < i; j++){
            if(a[j] < a[i]){
                dp[i] = max(dp[i], dp[j] + a[i]);
            }
        }
    }
    cout << *max_element(dp, dp + n);
}
/*

*/