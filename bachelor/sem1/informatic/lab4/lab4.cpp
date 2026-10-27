#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "========================================" << endl;
    cout << " Лабораторная работа №4. Вариант 8 " << endl;
    cout << " Габов Даниил Алексеевич группа ИВТ-26-1б " << endl;
    cout << "========================================" << endl;

    srand(time(0));
    
    int n;
    cout << "Введите размер масива n: ";
    cin >> n;

    int massiv[100];
    int len = n;

    cout << "Исходный массив: ";
    for (int i = 0; i < len; i++){
        massiv[i] = rand() % 20 - 10;
        cout << massiv[i] << " ";
    }
    cout << endl;

    int chislo;
    cout << "Введите значение для удаления:" << endl;
    cin >> chislo;

    int j = 0;
    for (int i = 0; i < len; i++){
        if (massiv[i] != chislo){
            massiv[j] = massiv[i];
            j++;
        }
    }
    len = j;

    cout << "Массив после удаления" << chislo << ": ";
    for (int i = 0; i < len; i++){
        cout << massiv[i] << " ";
    }
    cout << endl;

    for (int i = len - 1; i >= 0; i--){
        if (massiv[i] % 2 == 0){
            for (int k = len; k > i; k--){
                massiv[k] = massiv[k - 1];
            }
            massiv[i] = 0;
            len++;
        }
    }

    cout << " Итоговый массив:" << endl;
    for (int i = 0; i < len; i++){
        cout << massiv[i] << " ";
    }
    cout << endl;

    return 0;
}



