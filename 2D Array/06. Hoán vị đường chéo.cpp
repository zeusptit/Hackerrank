#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;

void in(int a[][505],int n)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

void out(int a[][505],int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main(){
    quick();
    int n;cin >> n;
    int a[505][505];
    in(a,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == j)
                swap(a[i][j],a[i][n - j - 1]);
        }
    }
    out(a,n);
}
/*
8
519 178 774 271 764 669 193 986 
103 481 214 628 803 100 528 626 
544 925 24 973 62 182 4 433 
506 594 726 32 493 143 223 287 
65 901 188 361 414 975 271 171 
236 834 712 761 897 668 286 551 
141 695 696 625 20 126 577 695 
659 303 372 467 679 594 852 485 
*/
