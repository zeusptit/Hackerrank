#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

struct Num{
    ll thuc,ao;
    void in()
    {
        cin >> thuc >> ao;
    }
    void out()
    {
        cout << thuc << " " << ao << endl;
    }
};

typedef struct Num Nm;

Nm tong(Nm a,Nm b)
{
    Nm c;
    c.thuc = a.thuc + b.thuc;
    c.ao = a.ao + b.ao;
    return c;
}
Nm hieu(Nm a,Nm b)
{
    Nm c;
    c.thuc = a.thuc - b.thuc;
    c.ao = a.ao - b.ao;
    return c;
}
Nm tich(Nm a,Nm b)
{
    Nm c;
    c.thuc = a.thuc * b.thuc - a.ao * b.ao;
    c.ao = a.thuc * b.ao + a.ao * b.thuc;
    return c;
}
int main(){
    quick();
    Nm a,b,c,d,e;
    a.in();b.in();
    c = tong(a,b);
    d = hieu(a,b);
    e = tich(a,b);
    c.out();d.out();e.out();
}
/*

*/