#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "========================================" << endl;
    cout << " Лабораторная работа №3. Вариант 8 " << endl;
    cout << " Габов Даниил Алексеевич группа ИВТ-26-1б " << endl;
    cout << "========================================" << endl;

    const double PI = 3.14159265358979323846;
    double a = 0.1;
    double b = 0.8;
    int k = 10;
    double h = (b - a) / k;
    double eps = 0.0001;
    int n = 40;

    cout << "X\t\tSN\t\tSE\t\tY" << endl;
    cout << "----------------------------------------" << endl;

    for (int i = 0; i <= k; i++) {
        double X = a + i * h;
        double Y = X * sin(PI / 4.0) / (1.0 - 2.0 * X * cos(PI / 4.0) + pow(X, 2));
        double SN = 0.0;
        for (int j = 1; j <= n; j++) {
            SN += pow(X, j) * sin(j * PI / 4.0);
        }
    double SE = 0.0;
    int j = 1;
    double z;
    do {
        z = pow(X, j) * sin(j * PI / 4.0);
        SE += z;
        j++;
        }
    while (fabs(z) >= eps);
    cout << X << "\t\t" << SN << "\t\t" << SE << "\t\t" << Y << endl;
    }
    return 0;
}














