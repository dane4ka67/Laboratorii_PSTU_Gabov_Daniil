#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "=== Лабораторная работа №1. Задание 2 ===" << endl;
    cout << "Габов Даниил Алексеевич, ИВТ-26-1б" << endl;
    cout << "=========================================" << endl;

    int n, m, r;
    cout << "\n1) n++ - m" << endl;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    r = n++ - m;
    cout << "Результат: " << r << endl;
    cout << "После: n = " << n << ", m = " << m << endl;

    cout << "\n2) m-- > n" << endl;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    r = m-- > n;
    cout << "Результат: " << r << " (0=ложь, 1=истина)" << endl;
    cout << "После: n = " << n << ", m = " << m << endl;

    cout << "\n3) n-- > m" << endl;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    r = n-- > m;
    cout << "Результат: " << r << " (0=ложь, 1=истина)" << endl;
    cout << "После: n = " << n << ", m = " << m << endl;
    return 0;
}










