#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

int cnt = 0;
class SinhVien{
    private:
        int id;
        string name,bth,clas;
        double gpa;
    public:
        SinhVien()
        {
            id = 0;
            name = "";
            bth = "";
            clas = "";
            gpa = 0;
        }
        friend istream& operator >> (istream& in,SinhVien &a)
        {
            cnt++;
            a.id = cnt;
            in.ignore();
            getline(in,a.name);
            getline(in,a.clas);
            getline(in,a.bth);
            in >> a.gpa;
            stringstream ss(a.name);
            string temp,final;
            while(ss >> temp)
            {
                temp[0] = toupper(temp[0]);
                for(int i = 1;i <= temp.size(); i++)
                    temp[i] = tolower(temp[i]);
                final += temp + " ";
            }
            final.pop_back();
            a.name = final;
            if(a.bth[1] == '/')a.bth= "0" + a.bth;
            if(a.bth[4] == '/')a.bth.insert(3,"0");   
            return in;    
        }
        friend ostream& operator << (ostream& out,SinhVien a)
        {
            if(a.id < 10)out << "SV00";else out << "SV0";
            out << a.id << " " << a.name << " " << a.clas << " " << a.bth << " " << fixed<<setprecision(2)<<a.gpa;
            return out;
        }
        bool operator <(SinhVien khac)
        {
            if(this->gpa != khac.gpa)
                return this->gpa > khac.gpa;
            return this-> id < khac.id;
        }
};

int main(){
    quick();
    int n; cin >> n;
    SinhVien a[n];;
    for(int i = 0;i < n; i++)cin >> a[i];
    //sort(a,a+n);
    for(int i = 0;i < n; i++)
    {
        cout << a[i] <<endl;
    }
}
/*

*/
