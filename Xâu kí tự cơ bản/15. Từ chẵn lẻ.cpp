#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


 int main(){
    quick();
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss >> temp)
    {
        v.push_back(temp);
    }
    for(int i = 0;i < v.size(); i++)
    {
        if(i % 2)
        {
            reverse(v[i].begin(),v[i].end());
            cout << v[i] << " ";
        }else
            cout << v[i] << " ";
    }
}
/*

*/