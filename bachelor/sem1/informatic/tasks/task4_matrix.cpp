#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int matrix[3][4] = {
        {5, 12, 7, 3},
        {9, 20, 1, 8},
        {4, 6, 15, 2}
    };

    int max_val = matrix[0][0];
    int max_row = 0;           
    int max_col = 0;            

    cout << "Матрица:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
            
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
        cout << endl; 
    }

    cout << "Максимальный элемент: " << max_val << endl;
    cout << "Строка: " << max_row << ", Столбец: " << max_col << endl;
    cout << "(Номер строки: " << max_row + 1 << ", Номер столбца: " << max_col + 1 << ")" << endl;

    return 0;
}