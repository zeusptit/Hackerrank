#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

long int binomialCoeff( int n,  int k)
{
    long int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}
 
long int catalan( int n)
{
    long int c = binomialCoeff(2 * n, n);
    return c / (n + 1);
}
 
int main(){
    quick();
    int n;
    cin >> n;
    cout << catalan(n/2);
}
/*

*/