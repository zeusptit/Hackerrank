#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n,k;
    cin >> n >> k;
    int a[n];
    ll sum = 0, s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(k > n / 2)
    {
        sort(a, a + n, greater<int> ());
        for(int i = 0 ; i < k; i++)s1 += a[i];
        s2 = sum - s1;
        cout << s1 - s2;
    }else{
        sort(a, a + n);
        for(int i = 0 ; i < k; i++)s1 += a[i];
        s2 = sum - s1;
        cout << s2 - s1;
    }
}
/*

*/