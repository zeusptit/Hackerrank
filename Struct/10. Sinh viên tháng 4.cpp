#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

struct SinhVien{
    string name,bth,adr;
    double gpa;
    void in()
    {
        cin.ignore();
        getline(cin,name);
        getline(cin,bth);
        getline(cin,adr);
        cin >> gpa;
    }
    char getMonth()
    {   
        if(bth[1] == '/')
            return bth[2];
        else 
            return bth[3];
    }
    void out()
    {
        cout << name << " " << bth << " " << adr << " " << fixed << setprecision(2) << gpa << endl;
    }
};

int main(){
    quick();
    SinhVien a[1001];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)a[i].in();
    for(int i = 0; i < n; i++)
        if(a[i].getMonth() == '4')
            a[i].out();
}
/*

*/