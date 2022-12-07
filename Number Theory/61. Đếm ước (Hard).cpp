#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int N = 1000005;
vector<vector<ll>>C(N);

void init()
{
    for(int i = 0; i <= N; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || i == j)
                C[i][j] = 1;
            else
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
        }
    }
}
int main(){
    quick();
    init();
    int n,k;
    cin >> n >> k;
    cout << C[n][k];
}
/*

*/