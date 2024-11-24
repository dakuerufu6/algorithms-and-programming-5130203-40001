#include <iostream>
#include <cmath>
using namespace std;


int *allocate_memory(int n) {
    return (int*) malloc(n * sizeof(int));
}

double sum_products(int *a, int *b, int n) {
    double res = 0;

    for (int i = 0; i < n; i++) {
        res += a[i] * b[i];
    }

    return res;
}

double sum(int *a, int n) {
    double res = 0;

    for (int i = 0; i < n; i++) {
        res += a[i];
    }

    return res;
}

double power_sum(int *a, int n, int power) {
    double res = 0;

    for (int i = 0; i < n; i++) {
        res += pow(a[i], power);
    }

    return res;
}

double avg(int *a, int n) {
    return sum(a, n) / n;
}

double linear_regression(double b0, double b1, int x) {
    return b0 + b1 * x;
}


int main() {
    int n, *x, *y, new_x, new_y;
    double b1, b0, expected_y, error;

    cout << "Enter n: ";
    cin >> n;

    x = allocate_memory(n);
    y = allocate_memory(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter x[" << i << "] & y[" << i << "]: ";
        cin >> x[i] >> y[i];
    }

    b1 = (sum_products(x, y, n) - n * avg(x, n) * avg(y, n)) / (power_sum(x, n, 2) - pow(sum(x, n), 2) / n);

    b0 = avg(y, n) - b1 * avg(x, n);

    cout << "Linear regression model: predicted y = " << b0 << " + " << b1 << " * x\n";

    cout << "Predicted y:\n";
    for (int i = 0; i < n; i++) {
        cout << "for x = " << x[i] << ": " << linear_regression(b0, b1, x[i]) << "\n";
    }
    
    cout << "Enter new x & y: ";
    cin >> new_x >> new_y;

    expected_y = linear_regression(b0, b1, new_y);
    cout << "Predicted y for new x = " << new_x << ": " << expected_y << "\n";

    error = abs(new_y - expected_y);
    cout << "Error: " << error << "\n";
}