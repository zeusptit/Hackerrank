#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n,V, w[1000], v[1000], F[1000][1000];
int main(){
    quick();
    cin >> n >> V;
    for(int i = 1; i <= n; i++)cin >> w[i];
    for(int i = 1; i <= n; i++)cin >> v[i];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= V; j++){
            F[i][j] = F[i - 1][j];
            if(j >= w[i]){
                F[i][j] = max(F[i][j], F[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << F[n][V];
}
/*

*/