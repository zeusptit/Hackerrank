#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, a[1005], F[1005];
int main(){
    quick();
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        F[i] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                F[i] = max(F[i], F[j] + 1);
            }
        }
    }
    cout << *max_element(F, F + n);
}
/*

*/