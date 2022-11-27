#include <bits/stdc++.h>
using namespace std;

int a[1000000];

int main(){
    int n ; cin >> n;
    for (int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    int check = 1;
    for (int i = 0 ; i < n - 1 ; i++ ){
        if(a[i] >= a[i + 1]){
            check = 0;
            break;
        }
    }
    if(check == 1){ 
        cout << "YES";
    }else{
        cout << "NO";
    }
}