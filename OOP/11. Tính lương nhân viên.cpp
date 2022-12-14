#include<bits/stdc++.h>
using namespace std;
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;
 
class NhanVien{
    private:
        string name,duty,id;
        ll wage,day, slr,alw,bonus;   
    public:
        NhanVien()
        {
           id = "NV01";
           name = "";
           duty = "";
           wage = 0;
           day = 0;
           slr = 0;
           alw = 0;
           bonus = 0;
        }
        void in()
        {
            getline(cin,name);
            cin >> slr >> day >> duty;
            slr *= day;
            if(duty == "GD")alw = 250000;
            if(duty == "PGD")alw = 200000;
            if(duty == "TP")alw = 180000;
            if(duty == "NV")alw = 150000;
 
            if(day >= 25)bonus = 0.2 * slr;
            else if(day >= 22 && day < 25)bonus = 0.1 * slr;
            wage =slr + bonus + alw;
        }
        void out()
        {
            cout << id << " " << name << " " << slr << " " << bonus << " " << alw << " " << wage;
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