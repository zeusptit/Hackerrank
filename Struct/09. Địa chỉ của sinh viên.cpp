#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

map<string,int> mp;
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
        mp[adr]++;
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
    int max_am = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        a[i].in();
        max_am = max(mp[a[i].adr],max_am);
    }
    for(auto it : mp)
    {
        if(it.second == max_am)
            cout << it.first << endl;
    }
}
/*

*/