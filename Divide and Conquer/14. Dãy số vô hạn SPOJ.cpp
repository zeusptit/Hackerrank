#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

struct Matrix{
    ll F[2][2];
    Matrix operator * (Matrix b){
        Matrix res;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                res.F[i][j] = 0;
                for(int k = 0; k < 2; k++){
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
    ll n; cin >> n;
    Matrix f;
    f.F[0][0] = f.F[1][0] = f.F[0][1] = 1; f.F[1][1] = 0;
    Matrix res = binPow(f, n);
    cout << res.F[0][1];
}
/*

*/