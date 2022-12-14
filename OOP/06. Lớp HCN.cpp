#include<bits/stdc++.h>
using namespace std;

#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
using ll = long long;
int mod=1000000007;

class Rectange{
    private:
        double width,height;
        string color;
    public:
        Rectange()
        {
            width = 0;
            height = 0;
            color = "";
        }
        void in()
        {
            cin >> width >> height >> color;
        }
        double getWidth(){
            return width;
        }
        double getHeight(){
            return height;
        }
        string getColor(){
            return color;
        }
        double findArea(){
            return (width + height) * 2;
        }
        double findPerimeter(){
            return width * height;
        }
        void out()
        {
            if(getWidth() > 0 && getHeight() > 0)
                cout << findArea() << " " << findPerimeter() << " " << getColor();
            else 
                cout << "INVALID";
        }
};
int main(){
    quick();
    Rectange n;
    n.in();
    n.out();
}
/*

*/
