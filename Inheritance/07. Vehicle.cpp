#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1000000007;

class Vehicle{
    private:
        string id, name,color,company;
    public:
        Vehicle()
        {
            id = "";
            name = "";
            company = "";
            color = "";
        }
        Vehicle(string id,string name,string company,string color)
        {
            this->id = id;
            this->name = name;
            this->company = company;
            this->color = color;
        }
        void out()
        {
            cout << id << ' ' << name << ' ' << company << ' ' << color << ' ' ;
        }
        string getCompany()
        {
            return company;
        }
};

class Motorbike : public Vehicle{
    private:
        int maxSpeed,price;
    public:
        Motorbike()
        {
            maxSpeed = 0;
            price = 0;
        }
        Motorbike(string id,string name,string company,string color,int price,int maxSpeed) : Vehicle(id,name,company,color)
        {
            this->price = price;
            this->maxSpeed = maxSpeed;
        }
        void out()
        {
            Vehicle::out();
            cout << price << ' ' << maxSpeed << endl;
        }
};

class Car : public Vehicle{
    private:
        int horsePower,price;
    public:
        Car()
        {
            horsePower = 0;
            price = 0;
        }
        Car(string id,string name,string company,string color,int price,int horsePower) : Vehicle(id,name,company,color)
        {
            this->price = price;
            this->horsePower = horsePower;
        }
        void out()
        {
            Vehicle::out();
            cout << price << ' ' << horsePower << endl;
        }
};
int main(){
    quick();
    int n;
    cin >> n;
    vector <Motorbike> v1;
    vector <Car> v2;
    for(int i = 0 ; i < n; i++)
    {
        cin.ignore();
        string id;getline(cin,id);
        if(id[0] == 'X')
        {
            string name;getline(cin,name);
            string company;getline(cin,company);
            string color;getline(cin,color);
            int price,maxSpeed;
            cin >> price >> maxSpeed;
            Motorbike t(id,name,company,color,price,maxSpeed);  
            v1.push_back(t);
        }else{
            string name;getline(cin,name);
            string company;getline(cin,company);
            string color;getline(cin,color);
            int price,horsePower;
            cin >> price >> horsePower;
            Car t(id,name,company,color,price,horsePower);
            v2.push_back(t);
        }
    }
    string s;cin >> s;
    cout << "DANH SACH XE HANG " << s << " : \n";
    for(int i = 0; i < v2.size(); i++)
        if(v2[i].getCompany() == s)
            v2[i].out();
    for(int i = 0; i < v1.size(); i++)
        if(v1[i].getCompany() == s)
            v1[i].out();
}
/*

*/