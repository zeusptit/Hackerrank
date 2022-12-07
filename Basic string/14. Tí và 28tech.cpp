#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);


 int main(){
    quick();
    string s;
    getline(cin,s);
    int n = s.length();
    for(int i=0;i<n;i++)s[i] = tolower(s[i]);
    string m = "28tech";
    stringstream ss(s);
    string temp;
    int cnt = 0;
    while(ss >> temp)
        if(temp == m)cnt++;
    cout << cnt;
}
/*

*/