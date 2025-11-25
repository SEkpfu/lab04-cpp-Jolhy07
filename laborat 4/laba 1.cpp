#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double calc1(double, double);
double distance_0(double, double);
double calc3(double, double);
int main()
{
    double a, b, s;
    cout << "Введи a: ";
    cin >> a;
    cout << "Введи b: ";
    cin >> b;
    s = calc1(calc3(5, distance_0(a, distance_0(2, b))), calc3(1000, a));
    cout << s;

    return 0;
}
double calc1(double a, double b)
{
    return (a + b);
}
double distance_0(double a, double b)
{
    return (a - b);
}
double calc3(double a, double b)
{
    return (a * b);
}