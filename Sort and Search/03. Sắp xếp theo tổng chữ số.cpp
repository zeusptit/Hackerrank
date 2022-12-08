#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int tongcs(int n)
{
    int s = 0;
    while(n)
    {
        s += n % 10;
        n/=10;
    }
    return s;
}
bool cmp(int a,int b)
{
    if(tongcs(a) != tongcs(b) )
        return tongcs(a) < tongcs(b);
    else return a < b;
}
int main()
{ 
    quick();
    int n;cin >> n;
    int a[n];
    for(int &x : a)cin >> x;
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++)cout << a[i] << " ";
}