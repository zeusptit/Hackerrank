#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s; cin >> s;
    int n = s.size();
    int F[n + 1][n + 1];
    memset(F, 0, sizeof(F));
    for(int i = 0; i < n; i++)F[i][i] = 1;
    int ans = 1;
    for(int len = 2; len <= n; len++){
        for(int i = 0; i <= n - len; i++){
            int j = i + len - 1;
            if(len == 2){
                if(s[i] == s[j])
                    F[i][j] = 1;
                else
                    F[i][j] = 0;
            }else{
                F[i][j] = (s[i] == s[j]) && F[i + 1][j - 1];
            }
            if(F[i][j]) ans = max(ans, len);
        }
    }
    cout << ans;
}
/*

*/