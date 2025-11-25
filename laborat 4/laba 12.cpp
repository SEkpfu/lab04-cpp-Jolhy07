#include <iostream>
using namespace std;

void func(int a);
void func(int a, int b, int c, int d, int e, int f);
void func(int a, int b);

int main()
{
    cout << "проверка числа 123321\nна ввод подается 123321:\n";
    func(123321);
    cout << "\n1, 2, 3, 3, 2, 1:\n";
    func(1, 2, 3, 3, 2, 1);
    cout << "\n123, 321:\n";
    func(123, 321);
    cout << "\nпроверка числа 123456\nна ввод подается 123456:\n";
    func(123456);
    cout << "\n1, 2, 3, 4, 5, 6:\n";
    func(1, 2, 3, 4, 5, 6);
    cout << "\n123, 456:\n";
    func(123, 456);
}

void func(int a) {
    int a1 = a / 100000 + a / 10000 % 10 + a / 1000 % 10;
    int a2 = a % 10 + a / 10 % 10 + a / 100 % 10;
    if (a1 == a2) cout << "счастливый билет! ";
    else cout << "не повезло:/ ";
}

void func(int a, int b, int c, int d, int e, int f) {
    if (a + b + c == e + f + d) cout << "счастливый билет! ";
    else cout << "не повезло:/ ";
}

void func(int a, int b) {
    a = (a / 100 + a / 10 % 10 + a % 10);
    b = (b / 100 + b / 10 % 10 + b % 10);
    if (a == b) cout << "счастливый билет! ";
    else cout << "не повезло:/ ";
}