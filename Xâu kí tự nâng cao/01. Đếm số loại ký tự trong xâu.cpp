#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);

int main(){
    quick();
    int c = 0,s = 0,a = 0;
    string str;
    getline(cin,str);
    for(char x : str)
    {
        if(isalpha(x))c++;
        else if(isdigit(x))s++;
        else a++;
    }
    cout << c << " " << s << " " << a;
}
/*

*/