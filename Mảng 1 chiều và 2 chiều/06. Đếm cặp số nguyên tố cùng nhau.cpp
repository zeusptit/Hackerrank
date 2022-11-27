#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int gcd(int a,int b)
{
    if(b == 0)return a;
    else return gcd(b,a % b);
}

int main() {
    quick();
    int n;cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;cin >> x;
        v.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(gcd(v[i],v[j]) == 1)cnt++;
        }
    }
    cout << cnt;
}