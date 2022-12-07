#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int main(){
    quick();
    int n; 
    cin >> n;
    cout << 1 << endl;
    for(int i = 2; i <= n; i++)
    {
        if(i % 2 == 0)
            cout << 2 << endl;
        else if(isPrime(i))
            cout << i << endl;
        else{
            for(int i = 3; i <= n; i++)
                if(n % i == 0)
                {
                    cout << i << endl;
                    break;
                }
        }
    }
}
/*

*/