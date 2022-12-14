#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

class Person{
    private:
        string name, bth, adr;
    public:
        Person(){
            name = bth = adr = "";
        }
        Person(string name,string bth, string adr){
            this-> name = name;
            this-> bth = bth;
            this-> adr = adr;
        }
        void out()
        {
            cout << name << ' ' << bth << ' ' << adr << ' ';
        }
        void sdd()
        {
            if(bth[1] == '/')bth = "0" + bth;
            if(bth[4] == '/')bth.insert(3,"0");
            stringstream ss(name);
            string temp,res = "";
            while(ss >> temp)
            {
                res += toupper(temp[0]);
                for(int i = 1; i < temp.size(); i++)
                    res += tolower(temp[i]);
                res += " ";
            }
            res.pop_back();
            name = res;
        }
};

class Student : public Person{
    private:
        string msv,clas;
        double gpa;
    public:
        Student(string name, string bth, string adr,int msv,string clas,double gpa) : Person( name, bth, adr)
        {
            this->msv = to_string(msv);
            while(this->msv.size() < 4)
                this->msv = "0" + this->msv;
            this->clas = clas;
            this->gpa = gpa;
        }
        void out()
        {
            cout << msv << ' ';
            Person::out();
            cout << clas << ' ' << fixed << setprecision(2) << gpa << endl;
        }
};
int main(){
    quick();
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        cin.ignore();
        string name; getline(cin,name);
        string x; getline(cin,x);
        string clas; getline(cin,clas);
        double gpa; cin >> gpa;
        int pos = 0;
        for(int i = 0; i < x.size(); i++)
            if(isalpha(x[i]))
            {
                pos = i;
                break;
            }
        string bth = x.substr(0,pos);
        string adr = x.substr(pos);
        Student st(name,bth,adr,i + 1,clas,gpa);
        st.sdd();
        st.out();
    }
}
/*

*/