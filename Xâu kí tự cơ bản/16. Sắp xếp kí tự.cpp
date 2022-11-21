#include<bits/stdc++.h>
 using namespace std; 
 
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

 int main(){
    quick();
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    cout << s << endl;
    reverse(s.begin(),s.end());
    cout << s;
}
/*

*/