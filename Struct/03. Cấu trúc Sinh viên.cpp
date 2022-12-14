#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

struct SinhVien{
    string name,bth,adr;
    int mth,phys,che,sum;
    string mod;
    void in()
    {
        cin.ignore();
        getline(cin,name);
        getline(cin,bth);
        getline(cin,adr);
        cin >> mth >> phys >> che;
        sum = mth + phys + che;
        if(sum >= 24) mod = "DO";else mod = "TRUOT";
    }
    void out()
    {
        cout << name << " " << bth << " " << adr << " " << sum << " " << mod << endl;
    }
};

int main(){
    quick();
    SinhVien a[1001];
    int n;
    cin >> n;
    int max_sc = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        a[i].in();
        max_sc = max(max_sc,a[i].sum);
    }
    cout << "DANH SACH THU KHOA :\n";
    for(int i = 0; i < n; i++)
        if(a[i].sum == max_sc)
            cout << a[i].name << " " << a[i].bth << " " << a[i].adr << " " << a[i].sum << " " << endl;
        cout << "KET QUA XET TUYEN:\n";
    for(int i = 0; i < n; i++)
        a[i].out();
}
/*

*/