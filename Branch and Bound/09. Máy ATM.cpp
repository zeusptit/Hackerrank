#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, T[100],X[100], s, kt = 0, sum;

void nhap()
{
    cin >> n >> s;
    for(int i = 1; i <= n; i++) cin >> T[i];
    sort(T + 1, T + n + 1, greater<int>());
    X[0] = 0;
}

void Try(int i,int k)
{
    for(int j = X[i - 1] + 1; j <= n - k + i; j++)
    {
        if(kt)return ;
        X[i] = j;
        if(i == k)
        {
            sum = 0;
            for(int l = 1; l <= k; l++)
                sum += T[X[l]];
            if(sum == s)
            {
                kt = 1;
                cout << k << endl;
                return;
            }
        }else
            Try(i + 1,k);
    }
}

int main(){
    quick();
    nhap();
    for(int i = 1; i <= n; i++)
    {
        Try(1, i);
        if(kt)return 0;
    }
    cout << "-1";
}
/*

*/