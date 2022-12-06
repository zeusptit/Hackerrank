#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, k = 2, a[100], sum = 0, ok = 0, X[100];

void Try(int i, int pos, int tong)
{
    if(ok)return;
    for(int j = pos; j <= n; j++)
    {
        if(tong + a[j] <= sum)
        {
            tong += a[j];
            //X[i] += a[j];
            if(tong == sum)
            {
                ok = 1;
                return;
            }
            else
                Try(i + 1, j + 1, tong);
            tong -= a[j];
        }
    }
}

void nhap()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if(sum % k != 0)
    {
        cout << 0 << endl;
        return;
    }
    sum /= k;
    Try(1, 1, 0 );
    cout << ok << endl;
}
int main(){
    quick();
    nhap();
}
/*

*/