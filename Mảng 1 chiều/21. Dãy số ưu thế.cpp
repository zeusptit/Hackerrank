#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;


int main()
{
    quick();
    int n,dc = 0,dl = 0,cnt = 0;
    while(cin >> n)
    {
        if(n%2 == 0)dc++;else dl++;
        cnt++;
    }
    if(cnt % 2 == 0)
    {
        if(dc > dl)cout << "YES";
        else cout << "NO"    ;
    }else{
        if(dl > dc)cout << "YES";
        else cout << "NO";
    }
}