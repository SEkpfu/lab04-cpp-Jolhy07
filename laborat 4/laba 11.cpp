#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double square(int, int);
double square(int, int, int);
double square(double, double, double);
int main()
{
    int a1, h;
    cout << "Введите сторону, на которую падает высота: ";
    cin >> a1;
    cout << "Введите высоту: ";
    cin >> h;
    int a2, b2, g;
    cout << "Введите первую из двух смежных сторон: ";
    cin >> a2;
    cout << "Введите вторую из двух смежных сторон: ";
    cin >> b2;
    cout << "Введите градусную меру угла: ";
    cin >> g;
    double a3, b3, c3;
    cout << "Введите первую сторону: ";
    cin >> a3;
    cout << "Введите вторую сторону: ";
    cin >> b3;
    cout << "Введите третью сторону: ";
    cin >> c3;

    cout << "Площадь в первом случае: " << square(a1, h) << "\n"
         << "Площадь во втором случае: " << square(a2, b2, g) << "\n"
         << "Площадь в третьем случае: " << square(a3, b3, c3);

    return 0;
}
double square(int a, int h)
{
    return (a * h / 2.0);
}
double square(int a, int b, int degrees)
{
    double ugol = 2.0 * M_PI * (degrees / 360.0);
    return (a * b * sin(ugol) / 2.0);
}
double square(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return (sqrt(p * (p - a) * (p - b) * (p - c)));
}