#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    set<int> se;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            se.insert(i);
            n /= i;
            if(se.size() == 2)
                break;
        }
    }
    if(se.size() <= 1 || n == 1 || se.count(n) == 1)
        cout << "NO";
    else 
        cout << "YES";
}
/*

*/