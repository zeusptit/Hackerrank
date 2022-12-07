#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

double solve(int n)
{
    if(n == 1) 
        return 1;
    else
        return 1.0 / n + solve(n - 1); 
}
    
int main(){
    quick();
    int n;
    cin >> n;
    cout << fixed << setprecision(3) << solve(n);
}
/*

*/