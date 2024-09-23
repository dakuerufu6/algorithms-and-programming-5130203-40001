#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, f, g;
    cout << "Enter x: ";
    cin >> x;
    if (x > -4 && x < -1) {
        g = abs(x + 6)/(abs(x + 3) - 3);
        cout << "G(X) = " << g << endl;
    }
    else if (x > -1 && x < 5) {
        g = sqrt(5 - x) - 2;
        cout << "G(X) = " << g << endl;
    }
    else if (x >= 5) {
        g = log(x + 10) - 2;
        cout << "G(X) = " << g << endl;
    }
    else {
        cout << "It's imposiible to calculate" << endl;
    }
    if (g < -2) {
        f = abs(g/(1 - g));
        cout << "F(G(X)) = " << f << endl;
    }
    else if (g >= -2 && g <= 1) {
        f = pow((g + 2), 2);
        cout << "F(G(X)) = " << f << endl;
    }
    else {
        cout << "It's impossible to calculate" << endl;
    }
}   