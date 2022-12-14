#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo()
        {
            tu = 0;
            mau = 0;
        }
        void rutgon()
        {
            ll temp = __gcd(tu,mau);
            tu /= temp;
            mau /= temp;
        }
        void in()
        {
            cin >> tu >> mau;
            rutgon();
        }
        void out()
        {
            cout << tu << "/" << mau;
        }
};
int main(){
    quick();
    PhanSo x;
    x.in();
    x.out();
}
/*

*/