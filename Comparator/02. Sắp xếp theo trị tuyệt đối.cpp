#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
int n,X; 

bool cmp1(int a,int b)
{
    if(abs(a - X) != abs(b - X))
        return abs(a - X) < abs(b - X);
    return a < b;
}

bool cmp2(int a,int b)
{
    if(a % 2 == 0 && b % 2 == 0)
        return a < b;
    if(a % 2 != 0 && b % 2 != 0)
        return a > b;
    if(a % 2 == 0)
        return true;
    return false;
}

int main(){
    quick();
    cin >> n >> X;
    int a[n],b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n, cmp1);
    for(int x : a)cout << x << ' ';
    cout << endl;
    sort(b, b + n, cmp2);
    for(int x : b)cout << x << ' ';
}
/*

*/