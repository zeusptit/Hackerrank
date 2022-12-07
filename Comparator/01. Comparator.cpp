#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int check1(int n)
{
    int cnt = 0;
    while(n)
    {
        int temp = n % 10;
        n /= 10;
        if(!(temp % 2))
            cnt++;
    }
    return cnt;
}

int check2(int n)
{
    int cnt = 0;
    while(n)
    {
        int temp = n % 10;
        n /= 10;
        if(temp % 2)
            cnt++;
    }
    return cnt;
}

bool cmp1(int a,int b)
{
    if(check1(a) != check1(b))
        return check1(a) < check1(b);
    return a < b;
}

bool cmp2(int a,int b)
{
    return check2(a) < check2(b);
}
int main(){
    quick();
    int n; cin >> n;
    int a[n],b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n, cmp1);
    for(int x : a)cout << x << ' ';
    cout << endl;
    stable_sort(b, b + n, cmp2);
    for(int x : b)cout << x << ' ';
}
/*

*/