#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int solve(int n,int k)
{
    if(k == 0 || k == n)
        return 1;
    else
        return solve(n - 1, k - 1) + solve(n - 1, k);
}
int main(){
    quick();
    int n,k;
    cin >> n >> k;
    cout << solve(n,k);
}
/*

*/