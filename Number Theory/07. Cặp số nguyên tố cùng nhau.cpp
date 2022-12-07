#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;


int main(){
    quick();
    int a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        for(int j = i + 1; j <= b; j++)
        {
            if(__gcd(i,j) == 1)
                cout << '(' << i << "," << j << ')' << endl; 
        }
    }
}
/*

*/