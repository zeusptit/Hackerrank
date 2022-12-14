#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

class Time{
    private:
        string h, m, s;
        ll temp;
    public:
        void in()
        {
            cin >> h >> m >> s;
            temp = stoi(h) * 60 * 60 + stoi(m) * 60 + stoi(s);
        }
        void out()
        {
            cout << h << ' ' << m << ' ' << s << endl;
        }
        ll getTemp()
        {
            return temp;
        }
};

bool cmp(Time a, Time b)
{
    return a.getTemp() < b.getTemp();
}

int main(){
    quick();
    int n; cin >> n;
    Time a[n];
    for(int i = 0; i < n; i++)
        a[i].in();
    sort(a, a + n, cmp);
    for(auto x : a)
        x.out();
}
/*

*/