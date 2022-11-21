#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    string s;
    cin >> s;
    int n = s.length();
    if(!(n % 2))
    {
        cout << "NOT FOUND";
        return 0;
    }else{
        cout << s[n/2];
    }
}
/*

*/