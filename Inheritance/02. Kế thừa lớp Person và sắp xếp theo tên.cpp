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
        string getName()
        {
            return name;
        }
};


class Student : public Person{
    private:
        string msv,clas;
        double gpa;
    public:
        Student()
        {
            msv = "";
            clas = "";
            gpa = 0;
        }
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
bool cmp(Student a,Student b)
{
    stringstream ss(a.getName());
    vector <string> v1,v2;
    string temp,res1;
    while(ss >> temp)v1.pb(temp);
    res1 += v1[v1.size() - 1];
    for(int i = 0; i < v1.size() - 1; i++)res1 += v1[i];
    stringstream sss(b.getName());
    string tmp,res2;
    while(sss >> tmp)v2.pb(tmp);
    res2 += v2[v2.size() - 1];
    for(int i = 0; i < v2.size() - 1; i++)res2 += v2[i];
    return res1 < res2;
}
int main(){
    quick();
    int n;
    cin >> n;
    vector<Student>v;
    for(int i = 0 ; i < n; i++)
    {
        cin.ignore();
        string name; getline(cin,name);
        string bth; getline(cin,bth);
        string adr; getline(cin,adr);
        string clas; getline(cin,clas);
        double gpa; cin >> gpa;
        Student t(name,bth,adr,i + 1,clas,gpa);
        t.sdd();
        v.push_back(t);

    }
    stable_sort(v.begin(), v.end(),cmp);
    for(int i = 0 ; i < n;i++)
        v[i].out();
}
/*

*/