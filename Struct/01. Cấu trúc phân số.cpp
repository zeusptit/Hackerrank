#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

struct PhanSo{
   ll tu,mau;

    void in()
    {
        cin >> tu >> mau;
    }
    void out()
    {
        if(tu * mau < 0)
        {
            mau = abs(mau);
            if(tu > 0)tu *= -1;
        }
        cout << tu << "/" << mau << endl;
    }
    void rutgon()
    {
        ll temp = __gcd(tu,mau);
        tu = tu / temp;
        mau = mau / temp;
    }
};

typedef struct PhanSo PS;
ll lcm(ll a, ll b)
{
    return a / __gcd(a,b) * b;
}
PS tong(PS a, PS b)
{
    PS c;
    ll temp = lcm(a.mau,b.mau);
    c.mau = temp;
    a.tu = (temp/a.mau) * a.tu;
    b.tu = (temp/b.mau) * b.tu;
    c.tu = a.tu + b.tu;
    c.rutgon();
    return c;
}

PS hieu(PS a, PS b)
{
    PS c;
    ll temp = lcm(a.mau,b.mau);
    c.mau = temp;
    a.tu = (temp/a.mau) * a.tu;
    b.tu = (temp/b.mau) * b.tu;
    c.tu = a.tu - b.tu;
    c.rutgon();
    return c;
}
int main(){
    quick();
    PS a,b,c,d;
    a.in(); b.in();
    a.rutgon(); b.rutgon();
    a.out(); b.out();
    c = tong(a,b);
    d = hieu(a,b);
    c.out(), d.out();
}
/*

*/