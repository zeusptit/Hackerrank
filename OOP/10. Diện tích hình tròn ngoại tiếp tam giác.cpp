#include <bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
#define pb push_back
using ll = long long;
int mod = 1e9 + 7;

class Point{
    double x,y;
    public:
    Point(){}
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    Point(const Point &p)
    {
        this->x = p.x;
        this->y = p.y;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    double distance(Point secondPoint)
    {
        double a = sqrt((x - secondPoint.x) * (x - secondPoint.x) + (y - secondPoint.y) * (y - secondPoint.y));
        return a;
    }
    friend istream& operator >> (istream& in, Point &a)
    {
        in >> a.x >> a.y;
        return in;
    }
};


int main() {
    quick();
    int test ; cin >> test;
    while(test--)
    {
        Point x;
        cin >> x;
        Point y;
        cin >> y;
        Point z;
        cin >> z;
        double a = x.distance(y);
        double b = x.distance(z);
        double c = z.distance(y);
        double p = a + b + c;
        if(a + b <= c || a + c <= b || b + c <= a)
        {
            cout << "INVALD\n" << endl;
            return 0;
        }
        p /= 2;
        double S = sqrt(p * (p - a) * (p - b) * (p - c));
        double R = (a * b * c) / (4 * S) ;
        cout << fixed << setprecision(3) << R * R * 3.14 << endl;
    }
}
/*

*/