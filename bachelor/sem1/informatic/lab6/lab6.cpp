#include <iostream>
#include <windows.h>
#include <cstdio>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "=============================" << endl;
    cout << " Лабораторная работа №6. Вариант 8 " << endl;
    cout << " Габов Даниил Алексеевич группа ИВТ-26-1б " << endl;
    cout << "=============================" << endl;

    char str[256];
    cout << "Ввод строки (в конце доп символ - точка): " << endl;
    gets_s(str, 256);

    int schetchik[10] = {0};

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';
            schetchik[digit]++;
        }
    }

    int otsortdigit = 9;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            while (schetchik[otsortdigit] == 0 ) {
                otsortdigit--;
            }
            str[i] = otsortdigit + '0';
            schetchik[otsortdigit]--;
        }
    }
    cout << "Отсортированная строка: " << str << endl;
    return 0;
}

