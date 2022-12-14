#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod = 1000000007;

class TuyenSinh{
    private:
        string ar, name;
        double math, phys, che, bonus;
        string mod;
        int kv;
    public:
        TuyenSinh()
        {
            
        }
        void in()
        {
            cin >> ar;
            cin.ignore();
            getline(cin,name);
            cin >> math >> phys >> che;
            kv = ar[2] - '0';
            if(kv == 1)bonus = 0.5;
            else if(kv == 2)bonus = 1.0;
            else bonus = 2.5;
        }
        void out()
        {
            double temp = math + phys + che + bonus;
            if(temp >= 24)mod = "TRUNG TUYEN";else mod = "TRUOT";
            string x = to_string(temp);
            int index;
            for(int i = 0; i < x.size(); i++)
                if(x[i] == '.')
                    index = i + 1;
            if(x[index] == '0')
                cout << ar <<' '<< name << ' '<< kv <<' '<< (int)temp<< ' ' << mod;
            else cout << ar <<' '<< name << ' '<< kv <<' '<< fixed << setprecision(1)<< temp<< ' ' << mod;
        }
};
int main(){
    quick();
    TuyenSinh x;
    x.in();
    x.out();
}
/*

*/