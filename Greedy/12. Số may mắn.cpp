#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

int main(){
    quick();
    int n; cin >> n;
    for(int y = n / 7; y >= 0; y--)
    {
        int temp = n - y * 7;
        if(temp % 4 == 0)
        {
            for(int x = 0; x < temp / 4; x++)
                cout << "4";
            for(int x = 0; x < y; x++)
                cout << "7";
            return 0;
        }
    }
    cout << "-1";
}
/*

*/