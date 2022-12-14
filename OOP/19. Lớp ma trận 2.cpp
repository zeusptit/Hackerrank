#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

class Matrix{
    private:
        ll a[51][51]; 
        int n, m;
    public:
        void init(int n, int m)
        {
            this -> n = n;
            this -> m = m;
        }
        void in()
        {
            for(int i = 0; i < n; i++)
                for(int j = 0; j < m; j++)
                    cin >> a[i][j];
        }
        Matrix mul()
        {
            Matrix b, c;
            b.n = m;
            b.m = n;
            for(int i = 0; i < b.n; i++)
                for(int j = 0; j < b.m; j++)
                    b.a[i][j] = a[j][i];
            c.n = c.m = n;
            for(int i = 0; i < c.n; i++)
                for(int j = 0; j < c.m; j++)
                    c.a[i][j] = 0;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    for(int k = 0; k < m; k++)
                    {
                        c.a[i][j] += a[i][k] * b.a[k][j];
                    }
                }
            }
            return c;
        }
        void out()
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                    cout << a[i][j] << ' ';
                cout << endl;
            }
        }
};

int main(){
    quick();
    Matrix a,c;
    int m,n; cin >> m >> n;
    a.init(m, n); 
    a.in();
    c = a.mul();
    c.out();
}
/*

*/