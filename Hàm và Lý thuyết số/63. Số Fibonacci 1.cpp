#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

ll fb[1000001];

void init()
{
    fb[0] = 0;
    fb[1] = 0;
    fb[2] = 1;
    for(int i = 3; i <= 1e6; i++)
        fb[i] = (fb[i - 1] + fb[i - 2]) % mod;
}

int main(){
    quick();
    init();
    int n;
    cin >> n;
    cout << fb[n];
}
/*

*/