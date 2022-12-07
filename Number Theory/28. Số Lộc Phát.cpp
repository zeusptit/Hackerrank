#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

int check(int n)
{
    int rev = 0,cnt = 0, sum = 0;
    ll m = n;
    while(n)
    {
        int temp = n % 10;
        rev = rev * 10 + temp;
        sum += temp;
        if(temp == 6)cnt++;
        n /= 10;
    }
    return cnt >= 1 && sum % 10 == 8 && rev == m;
}


int main(){
    quick();
    int a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        if(check(i))
            cout << i << ' ';
    }
}
/*

*/