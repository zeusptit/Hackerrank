#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

struct Matrix{
    ll F[15][15]; int n;
    Matrix operator * (Matrix b){
        Matrix res;
        res.n = n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                res.F[i][j] = 0;
                for(int k = 0; k < n; k++){
                    res.F[i][j] += F[i][k] * b.F[k][j];
                    res.F[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

Matrix binPow(Matrix a, ll n)
{
    if(n == 1)return a;
    Matrix temp = binPow(a, n / 2);
    if(n % 2 == 1)
        return temp * temp * a;
    else
        return temp * temp;
}


int main(){
    quick();
    int n, k; cin >> n >> k;
    Matrix a; a.n = n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a.F[i][j];
        }
    }
    Matrix ans = binPow(a, k);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ans.F[i][j] << ' ';
        }
        cout << endl;
    }
}
/*

*/