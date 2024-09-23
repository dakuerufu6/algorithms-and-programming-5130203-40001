#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float h, v, a, t, x, y;
    const float g = 9.8;
    cout << "h = "<< endl;
    cin >> h;
    cout << "v = " << endl;
    cin >> v;
    cout << "a = " << endl;
    cin >> a;
    t = ((v*sin(a))/g)*(1+sqrt(1+(2*g*h)/(pow(v,2)*pow(sin(a),2))));
    x = v*t*cos(a);
    y = h+v*t*sin(a);
    cout << t << endl;
    cout << x << endl;
    cout << y << endl;
}