#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

class SinhVien{
    private:
        string name,bth;
        double sc1, sc2, sc3, sum;
    public:
        void in()
        {
            getline(cin,name);
            getline(cin,bth);
            cin >> sc1 >> sc2 >> sc3;
            sum = sc1 + sc2 + sc3;
        }
        void out()
        {
            cout << name << " " << bth << " " << fixed << setprecision(1) << sum;
        }
};
int main(){
    quick();
    SinhVien n;
    n.in();
    n.out();
}
/*

*/