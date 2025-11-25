#define _USE_MATH_DEFINES
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double faringate(double);
double kelvin(double);
void Kelvin_Faringate(double, double &, double &);
int main()
{
    double C, F, K;
    cout << "Введите температуру в Цельсиях: ";
    cin >> C;
    Kelvin_Faringate(C, F, K);
    cout << "Температура в Фарингейтах: " << faringate(C) << "\n"
         << "Температура в Кельвинах: " << kelvin(C) << "\n"
         << "Температура в Фарингейтах: " << F << "\n"
         << "Температура в Кельвинах: " << K;

    return 0;
}
double faringate(double C)
{
    return ((9.0 / 5) * C + 32);
}
double kelvin(double C)
{
    return (C + 273);
}
void Kelvin_Faringate(double C, double &F, double &K)
{
    F = (9.0 / 5) * C + 32;
    K = C + 273;
}