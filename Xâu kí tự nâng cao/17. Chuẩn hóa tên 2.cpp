#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s;
    getline(cin,s);
    string temp;
    stringstream ss(s);
    vector<string>v;
    while(ss >> temp)
    {
        string final;
        final += toupper(temp[0]);
        for(int i = 1; i < temp.size(); i++)
            final += tolower(temp[i]);
        v.push_back(final);
    }
    for(int i=0;i<v[v.size()-1].size();i++)
    {
        v[v.size() - 1][i] = toupper(v[v.size() - 1][i]);
    }
    for(int i = 0; i < v.size() - 1; i++)if(i != v.size() - 2)cout << v[i] << " ";else cout << v[i];
    cout << ", " << v[v.size() - 1] << endl;
    cout << v[v.size() - 1] << ", ";
    for(int i = 0;i < v.size() - 1; i++)cout << v[i] << " ";
}
/*
hoang     dinh  NAm
1/1/2002
*/