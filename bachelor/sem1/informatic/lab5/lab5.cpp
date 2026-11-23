#include <iostream>
#include <windows.h>
using namespace std;

const int n = 3;

void transpose(int mat[n][n]){
    int temp[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            temp[j][i] = mat[j][i];
        }
    }
}
    
bool symmetriya(int mat[n][n], int transposed[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != transposed[i][j]){
                return false;
            }
        }
    }
    return true;
}

void matrix(int mat[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "========================================" << endl;
    cout << " Лабораторная работа №5. Вариант 8 " << endl;
    cout << " Габов Даниил Алексеевич группа ИВТ-26-1б " << endl;
    cout << "========================================" << endl;

    // Исходная матрица (сделаем её симметричной для проверки)
    int mat[n][n] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    cout << "Исходная матрица:" << endl;
    matrix(mat);

    int transposed[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transposed[i][j] = mat[i][j];
        }
    }

    transpose(transposed);

    cout << "Транспонированная матрица (поворот на 90°):" << endl;
    matrix(transposed);

    // Проверяем на симметрию
    if (symmetriya(mat, transposed)) {
        cout << "Результат: Матрица СИММЕТРИЧНАЯ и равна исходной." << endl;
    } else {
        cout << "Результат: Матрица НЕ симметричная." << endl;
    }
    return 0;
}



    
