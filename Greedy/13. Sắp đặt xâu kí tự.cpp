#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s; cin >> s;
    int cnt[256] = {0};
    for(char x : s)cnt[(int)x]++;
    int sum = 0, max_val = -1;
    for(char x : s)
    {
        max_val = max(max_val,cnt[x]);
        if(cnt[x])
        {
            sum += cnt[x];
            cnt[x] = 0;
        }
    }
    int rest = sum - max_val;
    if((max_val - rest) > 1)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}
/*

*/