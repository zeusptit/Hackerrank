#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n, m, X; cin >> n >> m >> X;
    int a[n], b[m];
    for(int &x : a)cin >> x;
    for(int &x : b)cin >> x;
    int cnt = 0, i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] > b[j]){
            cnt++;
            if(cnt == X){
                cout << b[j];
                return 0;
            }
            j++;
        }else{
            cnt++;
            if(cnt == X){
                cout << a[i];
                return 0;
            }
            i++;
        }
    }
    while(i < n){
        cnt++;
        if(cnt == X){
            cout << a[i];
            return 0;
        }
        i++;
    }
    while(j < m){
        cnt++;
        if(cnt == X){
            cout << b[j];
            return 0;
        }
        j++;
    }
}
/*

*/