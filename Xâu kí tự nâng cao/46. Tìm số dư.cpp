#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int solve(string s)
{
    int sum = 0;
    int n = s.size();
    for(int i = 0; i < n; i++)
        sum = (sum * 10 + (s[i] - '0')) % 4;
    return sum;
}
 int main(){
    quick();
    string s;
    cin >> s ;
    int n = solve(s);
    if(n == 1 || n == 2 || n == 3)cout << "0";
    else cout << "4";
}
/*

*/