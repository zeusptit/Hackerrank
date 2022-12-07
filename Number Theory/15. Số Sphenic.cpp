#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    ll n;
    cin >> n;
    int cnt = 0,kt = 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int temp = 0;
            while(n % i == 0)
            {
                n /= i;
                temp ++;
                if(temp > 1)kt = 1;
            }
            cnt++;
        }
    }
    if(n != 1)cnt++;
    if(cnt == 3 && !kt)cout << 1;
    else cout << 0;
}
/*

*/