#include <iostream>
using namespace std;

double fact(int n);
void a();
void b();
double deg(double n, int x);

int main() {
    b();
}

void a()
{
    cout << "введите n, m ";
    int n, m;
    cin >> n >> m;
    cout << (fact(n) * fact(m)) / fact(n + m);
}

double fact(int n) {
    int m{ 1 };
    for (int i{ 1 }; i <= n; i++) m *= i;
    return m;
}

void b() {
    cout << "введите n, x ";
    double n;
    int x;
    cin >> n >> x;
    cout << deg(n, x);
}

double deg(double n, int x) {
    if (x > 0) for (int i{ 1 }; i < x; i++) n *= n;
    else if (x < 0) {
        n = 1 / n;
        for (int i{ 1 }; i < -x; i++) n *= n;
    }
    else {
        n = 1;
    }
    return n;
}