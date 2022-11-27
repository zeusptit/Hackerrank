#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

bool check(vector<int> a,int n)
{
    int c50 = 0,c25 = 0;
    for(int x : a)
    {
        if(x == 25)c25++;
        else if(x == 50)
        {
            if(c25 == 0)return false;
            c50++;
            c25--;
        }
        else{
            if(c25 == 0 || c25 * 25 + c50 * 50 < 75)return false;
            if(c50)
            {
                c50--;
                c25--;
            }
            else {
                c25 -= 3;
            }
        }
    }
    return true;
}

int main() {
    quick();
    int n;
    cin >> n ;
    vector<int> v(n);
    for(int &x : v)cin >> x;
    if(check(v,n))cout << "YES" << endl;
    else cout << "NO" << endl;
}