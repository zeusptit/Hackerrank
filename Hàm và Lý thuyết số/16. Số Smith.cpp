#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int res = 0;
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(!(n % i))
            {
                while(!(n % i))
                    n /= i;
                res = i;
            }
        }
        if(n != 1)res = n;
        cout << res;
    }
}
/*

*/