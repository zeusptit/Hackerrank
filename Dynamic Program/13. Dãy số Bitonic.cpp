#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, a[1005], F1[1005], F2[1005];
int main(){
    quick();
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        F1[i] = F2[i] = a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                F1[i] = max(F1[i], F1[j] + a[i]);
            }
        }
    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = n - 1; j >= i; j--){
            if(a[i] > a[j]){
                F2[i] = max(F2[i], F2[j] + a[i]);
            }
        }
    }
    int ans = INT_MIN;
    for(int i = 0; i < n; i++)
        ans = max(ans, F1[i] + F2[i] - a[i]);
    cout << ans;
}
/*

*/