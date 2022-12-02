#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main()
{
    quick();
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    int cnt = 1, res = 1, sum = a[0], idx = 0, ans = a[0];
    for(int i = 1; i < n; i++)    
    {
        if(a[i] > a[i - 1]) cnt++;
        else
        {
            if(cnt > res)
            {
                res = cnt;
                ans = sum;
                idx = i - cnt;
            }
            else if(cnt == res)
            {
                if(sum > ans)
                {
                    ans = sum;
                    idx = i - cnt; 
                }
            }
            cnt = 1;
            sum = a[i];
        }
    }
    if(cnt > res)
    {
        res = cnt;
        ans = sum;
        idx = n - cnt;
    }
    else if(cnt == res)
    {
        if(sum > ans)
        {
            ans = sum;
            idx = n - cnt;
        }
    }
    cout << res << endl;
    for(int i = 0; i < res; i++) 
        cout << a[idx + i] << " ";
}