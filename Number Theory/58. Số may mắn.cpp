#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n,x;
    cin >> n >> x;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(x % i == 0)
        {
            if(x/i == i)
            {
                if(i <= n)cnt++;
            }else{
                if(x/i <= n && i <= n)cnt += 2;
            }
        }
    }
    cout << cnt;
}
/*

*/