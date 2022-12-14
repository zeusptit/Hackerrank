#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

class Income{
    private:
        string id, name;
        int slr;
    public:
        friend istream& operator >>(istream& in, Income &n)
        {
            getline(in, n.id);
            getline(in, n.name);
            in >> n.slr;
            return in;
        }
        friend ostream& operator <<(ostream& out, Income n)
        {
            int bonus;
            string temp = n.id.substr(0, 2);
            if(temp == "HT")bonus = 2000000;
            else if(temp == "HP") bonus = 900000;
            else bonus = 500000;
            int x = stoi(n.id.substr(2, 4));
            out << n.id << ' ' << n.name << ' ' << x << ' ' << 1ll * (1ll * n.slr * x + bonus) << endl;
            return out;
        }
};
int main(){
    quick();
    Income n;
    cin >> n;
    cout << n;
}
/*

*/