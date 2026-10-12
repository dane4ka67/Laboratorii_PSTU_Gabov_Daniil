#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    cout << "==================================================" << endl;
    cout << "  Лабораторная работа №2. Вариант 8" << endl;
    cout << "  Габов Даниил Алексеевич, группа ИВТ-26-1б" << endl;
    cout << "==================================================" << endl;
    cout << "\nНайти сумму ряда с точностью eps = 0.0001" << endl;
    cout << "Общий член: a_n = (2n - 1) / 2^n" << endl;
    
    double eps = 0.0001;
    double sum = 0.0;
    double a;
    int n = 1;
    
    while (true) {
        a = (2.0 * n - 1.0) / pow(2.0, n);
        
        if (a < eps) break;
        
        sum += a;
        n++;
    }
    
    cout << "\nРезультат:" << endl;
    cout << "  Сумма = " << sum << endl;
    cout << "  Итераций: " << n - 1 << endl;
    
    return 0;
}