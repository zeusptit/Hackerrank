#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    string s,dob;
    getline(cin,s);
    getline(cin,dob);
    string temp,final;
    stringstream ss(s);
    while(ss >> temp)
    {
        final += toupper(temp[0]);
        for(int i = 1; i < temp.length(); i++)
            final += tolower(temp[i]);
        final += " ";    
    }
    final.erase(final.size() - 1);
    if(dob[1] == '/')dob="0" + dob;
    if(dob[4] ==' /')dob.insert(3,"0");
    cout << final << endl << dob;
}
/*
hoang     dinh  NAm
1/1/2002
*/