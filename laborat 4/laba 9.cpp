#include <iostream>
using namespace std;

bool f(double x, double& res);

int main()
{
    double res1, res2, res3, a, b;
    cout << "введите a, b ";
    cin >> a >> b;

    if (f(2, res1) && f(0, res2) && f(a, res3)) cout << res1 - res2 * res3 << endl;
    else cout << "false\n";

    if (f(2 * a, res1) && f(6, res2) && f(a * b, res3)) cout << res1 - res2 + res3;
    else cout << "false";
}

bool f(double x, double& res) {
    if (x > 5) {
        res = -3 - x;
        return true;
    }
    else if (x > 2) {
        res = 72 / 7.0;
        return true;
    }
    else {
        if (x == 1 || x == 0) return false;
        else {
            res = (2 * x + (1 / (1.0 - x))) / (3 * x);
            return true;
        }
    }
}
