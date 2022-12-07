#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

int main()
{
    quick();
    string s;
    cin >> s;
    int sum = 0;
    for(char x : s)sum += x - '0';
    cout << sum;
}