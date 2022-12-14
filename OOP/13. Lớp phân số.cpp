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
            cout << tu << "/" << mau << ' ';
        }
        PhanSo plus(PhanSo another)
        {
            PhanSo n;
            n.tu = tu * another.mau + another.tu * mau;
            n.mau = mau * another.mau;
            n.rutgon();
            return n;
        }
        PhanSo mul(PhanSo another)
        {
            PhanSo n;
            n.tu = tu * another.tu;
            n.mau = mau * another.mau;
            n.rutgon();
            return n;
        }
};
int main(){
    quick();
    int test; cin >> test;
    while(test--)
    {
        PhanSo a, b, c, d;
        a.in(); b.in();
        c = a.plus(b);
        c = c.mul(c);
        c.out();
        d = a.mul(b);
        d = d.mul(c);
        d.out();
        cout << endl;
    }
}
/*

*/