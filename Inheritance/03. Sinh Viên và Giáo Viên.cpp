#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

class Person{
    private:
        string id, name, bth, adr, clas;
    public:
        Person(){
            id = name = bth = adr = clas = "";
        }
        Person(string id,string name,string bth, string adr,string clas){
            this->id = id;
            this-> name = name;
            this-> bth = bth;
            this-> adr = adr;
            this->clas = clas;
        }
        void out()
        {
            cout << id << ' '<< name << ' ' << bth << ' ' << adr << ' ' << clas << ' ';
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
        double gpa;
    public:
        Student()
        {
            gpa = 0;
        }
        Student(string id,string name, string bth, string adr,string clas,double gpa) : Person(id, name, bth, adr, clas)
        {
            this->gpa = gpa;
        }
        void out()
        {
            Person::out();
            cout << fixed << setprecision(2) << gpa << endl;
        }
};

class Teacher : public Person{
    private:
        int slr;
    public:
        Teacher()
        {
            slr = 0;
        }
        Teacher(string id,string name, string bth, string adr,string clas,double slr) : Person(id, name, bth, adr, clas)
        {
            this->slr = slr;
        }
        void out()
        {
            Person::out();
            cout << slr << endl;
        }
};
int main(){
    quick();
    int n;
    cin >> n;
    vector<Student>v1;
    vector<Teacher>v2;
    for(int i = 0 ; i < n; i++)
    {
        cin.ignore();
        string id; getline(cin,id);
        string name; getline(cin,name);
        string bth; getline(cin,bth);
        string adr; getline(cin,adr);
        string clas; getline(cin,clas);
        if(id[0] == 'S')
        {
            double gpa;cin >> gpa;
            Student t(id,name,bth,adr,clas,gpa);
            t.sdd();
            v1.pb(t);
        }else{
            int slr;cin >> slr;
            Teacher t(id,name,bth,adr,clas,slr);
            t.sdd();
            v2.pb(t);
        }
    }
    cout << "DANH SACH GIAO VIEN : \n";
    for(int i = 0; i < v2.size(); i++)
        v2[i].out();
    cout << "DANH SACH SINH VIEN : \n";
    for(int i = 0; i < v1.size(); i++)
        v1[i].out();
}
/*

*/