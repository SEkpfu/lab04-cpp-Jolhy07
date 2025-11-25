#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double distance_2(double, double, double, double);
double distance_0(double, double);
double square_3(double, double, double, double, double, double);
double square_4(double, double, double, double, double, double, double, double);
void input(double &, double &, int);
int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    input(x1, y1, 1);
    input(x2, y2, 2);
    input(x3, y3, 3);
    input(x4, y4, 4);

    cout << "Дистанция между первой и второй точкой: " << distance_2(x1, y1, x2, y2) << "\n"
         << "Дистанция от начала координат до первой точки: " << distance_0(x1, y1) << "\n"
         << "Дистанция от начала координат до второй точки: " << distance_0(x2, y2) << "\n"
         << "Площадь треугольника: " << square_3(x1, y1, x2, y2, x3, y3) << "\n"
         << "Площадь четырёхугольника: " << square_4(x1, y1, x2, y2, x3, y3, x4, y4);
    return 0;
}
void input(double &x, double &y, int i)
{
    cout << "Введите x" << i << ": ";
    cin >> x;
    cout << "Введите y" << i << ": ";
    cin >> y;
}
double distance_2(double x1, double y1, double x2, double y2)
{
    return (sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
}
double distance_0(double x, double y)
{
    return (sqrt(pow(x, 2) + pow(y, 2)));
}
double square_3(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a, b, c, p;
    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    p = (a + b + c) / 2;
    return (sqrt(p * (p - a) * (p - b) * (p - c)));
}
double square_4(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    return (square_3(x1, y1, x2, y2, x3, y3) + square_3(x1, y1, x3, y3, x4, y4));
}