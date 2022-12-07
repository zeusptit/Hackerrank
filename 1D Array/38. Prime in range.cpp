#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod=1000000007;

int N=10000000,a[10000000],b[10000000];

void init()
{
    for(int i = 2; i <= N; i++)
        a[i] = 1;
    a[0] = 0;
    a[1] = 0;
    for(int i = 2; i <= N; i++)
    {
        if(a[i] == 1)
        for(int j = 2 * i; j <= N; j += i)
            a[j] = 0;
    }
    b[0] = a[0];
    for(int i = 1; i <= N; i++)
            b[i] = b[i - 1] + a[i];
}
int main()
{
    quick();
    init();
    int q;
    cin >> q;
    while(q--)
    {
        int l,r;cin >> l >> r;
        cout << b[r] - b[l - 1] << endl;
    }
}
/*

*/