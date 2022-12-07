    #include <bits/stdc++.h>
    using namespace std;

    #define quick() ios_base::sync_with_stdio(false); cin.tie(0);
    #define pb push_back
    using ll = long long;
    int mod = 1000000007;

    ll C[1002];
    int n;

    void P()
    {
        for(int i = 0; i <= n; i++)
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
        cin >> n;
        P();
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                cout << C[i][j] << ' ';
            }
            cout << endl;
        }
    /*

    */