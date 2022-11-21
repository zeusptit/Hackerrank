#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    int test;
    cin >> test;
    cin.ignore();
    map<string,int>mp;
    while(test--)
    {
        string s,dob;
        getline(cin,s);
        for(char &x : s)x = tolower(x);
        string temp;
        vector<string>v;
        stringstream ss(s);
        while(ss >> temp)
        {
            v.push_back(temp);
        }
         
        string email = v[v.size() - 2];
        for(int i = 0; i < v.size() - 2;i++)
            email += v[i][0];
            
        mp[email]++;
        if(mp[email] == 1)
            cout << email;
        else 
            cout << email << mp[email];
        cout << "@xyz.edu.vn" << endl;
        stringstream ss2(v[v.size() - 1]);
        string tmp;
        while(getline(ss2,tmp,'/'))
        {
            cout << stoi(tmp);
        }
        cout << endl;
    }
}
/*
1
ha tran the anh   05/1/2003
*/