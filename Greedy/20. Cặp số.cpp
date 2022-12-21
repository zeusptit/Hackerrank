#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int odd = 0, even = 0;
    for(int x : a)
    {
        if(x % 2)odd++;
        else even++;
    }
    if(n % 2)
    {
        cout << "NO";
        return 0;
    }
    int kt = 0;
    if(odd % 2 && even % 2)
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2)
            {
                if(binary_search(b, b + n, a[i] - 1) || binary_search(b, b + n, a[i] + 1))
                    kt = 1;
            }
        }
    }else{
        cout << "YES";
        return 0;
    }
    if(!kt)cout << "NO";
    else cout << "YES";
}
/*

*/