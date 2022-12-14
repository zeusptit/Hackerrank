#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

class SinhVien{
    private:
        string id;
        string name,bth,clas;
        string gpa;
    public:
        SinhVien()
        {
            id = "SV001";
            name = "";
            bth = "";
            clas = "";
            gpa = "0";
        }
        void in()
        {
            getline(cin,name);
            getline(cin,clas);
            getline(cin,bth);
            getline(cin,gpa);
            if(bth[1]=='/')bth = "0" + bth;
            if(bth[4]=='/')bth.insert(3,"0");        
        }
        void out()
        {
            cout << id << " " << name << " " << clas << " " << bth << " " << gpa;
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
