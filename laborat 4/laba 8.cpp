#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void quadro(double, double, double, double *, double *, string *);
int main()
{
    double a, b, c, root1, root2;
    int count = 0;
    string exist;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;
    quadro(a, b, c, &root1, &root2, &exist);
    cout << exist << endl;
    if (exist == "Корни есть")
    {
        if (root1 == root2)
        {
            cout << "Единственный корень уравнения: " << root1;
        }
        else
        {
            cout << "Первый корень: " << root1 << "\n"
                 << "Второй корень: " << root2;
        }
    }
    return 0;
}
void quadro(double a, double b, double c, double *x1, double *x2, string *true_or_false)
{
    double D = pow(b, 2) - 4 * a * c;
    if (D < 0)
    {
        *true_or_false = "Нет корней";
    }
    else
    {
        *true_or_false = "Корни есть";
        *x1 = (-b + sqrt(D)) / (2 * a);
        *x2 = (-b - sqrt(D)) / (2 * a);
    }
}