#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int n, k, a[100], sum = 0, ok = 0; 

void Try(int i, int pos, int tong, int dem)
{
    if(dem == k)
    {
        ok = 1;
        return;
    }
    for(int j = pos; j <= n; j++)
    {
        tong += a[j];
        if(tong == sum)
            Try(i + 1, j + 1, 0, dem + 1);
        else if(tong < sum)
            Try(i + 1, j + 1, tong, dem);
    }
}

void nhap()
{
    cin >> n >> k;
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
    Try(1, 1, 0 , 0);
    cout << ok << endl;
}
int main(){
    quick();
    nhap();
}
/*

*/