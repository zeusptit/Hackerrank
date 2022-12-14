#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

class NhanVien{
    private:
        string id;
        string name,sex,bth,adr,code,date;
    public:
        NhanVien()
        {
            id = "00001";
            name = "";
            sex = "";
            bth = "";
            adr = "";
            code = "";
            date = "";
        }
        void in()
        {
            getline(cin,name);
            getline(cin,sex);
            getline(cin,bth);
            getline(cin,adr);
            getline(cin,code);
            getline(cin,date);        
        }
        void out()
        {
            cout << id << " " << name << " " << sex << " " << bth << " " << adr << " " << code << " " << date;
        } 
};
int main(){
    quick();
    NhanVien n;
    n.in();
    n.out();
}
/*

*/
