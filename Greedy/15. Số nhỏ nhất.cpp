#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int s,d;
    cin >> s >> d;
    if(s > d * 9)
    {
        cout << "-1";
        return 0;
    }
    vector<int> v(d);
    s--;
    for(int i = d - 1; i >= 0; i--)
    {
        if(s >= 9)
        {
            v[i] = 9;
            s -= 9;
        }else{
            v[i] = s;
            s = 0;
        }
    }
    v[0] += 1;
    for(int x : v)cout << x;
}
/*

*/