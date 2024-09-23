#include <iostream>
#include <cmath>
using namespace std;

/// @brief 
/// @return 
int main(){
    double k, w, f, t, x, a;
    const double PI = 3.141592653589793;
    cout << "K = " << endl; //How many times is the coordinate is smaller than amplitude
    cin >> k;
    cout << "W = " << endl; //Enter the pendulum frequency
    cin >> w;
    f = asin(1/k);
    t = ((PI/2)-f)/w;
    cout << "T = " << t << endl; //The pendulum's deflection is maximum at the moment
    return 0;
}