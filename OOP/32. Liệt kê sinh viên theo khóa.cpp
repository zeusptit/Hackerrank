#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;
class SinhVien{
    private:
        string id, name, clas, email, year;
    public:
        friend istream& operator >>(istream& in, SinhVien &n)
        {
            getline(in, n.id);
            getline(in, n.name);
            getline(in, n.clas);
            getline(in, n.email);
            n.year = n.id.substr(0,4);
            stringstream ss(n.name);
            string temp, final = "";
            while(ss >> temp)
            {
                final += toupper(temp[0]);
                for(int i = 1; i < temp.size(); i++)
                    final += tolower(temp[i]);
                final += " ";
            }
            final.pop_back();
            n.name = final;
            return in;
        }
        friend ostream& operator <<(ostream& out, SinhVien n)
        {
            out << n.id << ' ' << n.name << ' ' << n.clas << ' ' << n.email << endl;
            return out;
        }
        string getYear()
        {
            return year;
        }
};
int main(){
    quick();
    int n; cin >> n;
    cin.ignore();
    SinhVien a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int q; cin >> q;
    while(q--)
    {
        int x; cin >> x;
        cout << "DANH SACH SINH VIEN KHOA " << x << " :\n";
        for(auto i : a)
            if(x == stoi(i.getYear()))
                cout << i;
    }
}
/*

*/