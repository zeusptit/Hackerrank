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
            stringstream ss(name);
            string temp,res = "";
            while(ss >> temp)
            {
                temp[0] = toupper(temp[0]);
                for(int i = 1; i < temp.size(); i++)
                    temp[i] = tolower(temp[i]);
                res += temp + " ";
            }
            res.erase(res.length() - 1);
            name=res;
            if(bth[1] == '/')bth = "0" + bth;
            if(bth[4] == '/')bth.insert(3, "0");
            if(date[1] == '/')date = "0" + date;
            if(date[4] == '/')date.insert(3, "0");
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
