#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double f(double x);

int main()
{
    cout << "введите a и b ";
    double a, b;
    cin >> a >> b;
    cout << 12.5 + f(2) - f(4) * f(10) + f(a) - f(b) + f(a * b);

    cout << "\nвведите 7 элементов массива x ";
    double x[7];
    double y[7];
    int count{ 0 };
    double max{ 0 };

    for (int i{ 0 }; i < 7; i++) {
        cin >> x[i];
    }
    for (int i{ 0 }; i < 7; i++) {
        y[i] = f(x[i]);
        if (y[i] < 0) count++;
        if (y[0] > max) max = y[i];
    }
    cout << "кол-во отрицательных элементов массива у: " << count << endl;
    cout << "наибольший элемент массива y: " << max;

}

double f(double x) {
    if (x < 0) return (7 / 3.0);
    else if (x < 2 * M_PI) return (x * x - 3);
    else return ((1 + pow(x, 3)) / 2 * x);
}
