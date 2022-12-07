#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int solve(int n)
{
    if(n == 1)
        return -1;
    else if(n % 2)
        return (-1) * n + solve(n - 1);
    else
        return n + solve(n - 1);
        
}
int main(){
    quick();
    int n;
    cin >> n;
    cout << solve(n);
}
/*

*/