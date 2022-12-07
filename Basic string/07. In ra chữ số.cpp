#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

 int main(){
    quick();
    string str;
    vector<char> s,c;
    cin >>str;
    int n = str.size();
    for(int i=0;i<n;i++)
    {
        if(isdigit(str[i]))
            s.push_back(str[i]);
        else c.push_back(str[i]);
    }
    for(char x : s)cout << x;
    cout << endl;
    for(char x : c)cout << x;
}
/*

*/