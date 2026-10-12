#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);   
    cout << " ========================================" << endl;
    cout << " Лабораторная работа №1. Вариант 8" << endl;
    cout << " Габов Даниил Алексеевич, группа ИВТ-26-1б" << endl;
    cout << " ========================================" << endl;
    cout << "\n>>> Вычисления с типом FLOAT (4 байта)" << endl;
    float a_f = 100.0f;
    float b_f = 0.001f;

    float sum_f = a_f + b_f;
    float sum4_f = sum_f * sum_f * sum_f * sum_f;
    float a4_f = a_f * a_f * a_f * a_f;
    float a3b_f = 4 * a_f * a_f * a_f * b_f;
    float a2b2_f = 6 * a_f * a_f * b_f * b_f;
    float chislitel_f = sum4_f - (a4_f + a3b_f + a2b2_f);

    float ab3_f = 4 * a_f * b_f * b_f * b_f;
    float b4_f = b_f * b_f * b_f * b_f;
    float znamenatel_f = ab3_f + b4_f;

    float result_f = chislitel_f / znamenatel_f;
    cout << "Результат (float): " << result_f << endl;

    cout << "\n>>> Вычисления с типом DOUBLE (8 байт)" << endl;
    double a_d = 100.0;
    double b_d = 0.001;

    double sum_d = a_d + b_d;
    double sum4_d = sum_d * sum_d * sum_d * sum_d;
    double a4_d = a_d * a_d * a_d * a_d;
    double a3b_d = 4 * a_d * a_d * a_d * b_d;
    double a2b2_d = 6 * a_d * a_d * b_d * b_d;
    double chislitel_d = sum4_d - (a4_d + a3b_d + a2b2_d);
    
    double ab3_d = 4 * a_d * b_d * b_d * b_d;
    double b4_d = b_d * b_d * b_d * b_d;
    double znamenatel_d = ab3_d + b4_d;

    double result_d = chislitel_d / znamenatel_d;
    cout << "Результат (double): " << result_d << endl;

    cout << "\n>>> Сравнение результатов" << endl;
    cout << "float: " << result_f << endl;
    cout << "double: " << result_d << endl;
    cout << "Разница: " << fabs(result_f - result_d) << endl;
    return 0;
}





    
