#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n], cnt[5] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int ans = 0;
    for(int i = 4; i > 0; i--)
    {
        while(cnt[i] > 0)
        {
            int rest = 4 - i;
            cnt[i]--;
            ans++;
            if(rest > 0)
            {
                for(int j = 3; j > 0; j--)
                {
                    while(rest >= j && cnt[j] > 0)
                    {
                        rest -= j;
                        cnt[j]--;
                    }
                }
            }
        }
    }
    cout << ans;
}
/*

*/