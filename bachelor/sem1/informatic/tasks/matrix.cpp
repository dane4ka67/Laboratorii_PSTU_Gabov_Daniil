#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    srand(time(0));

    int strok = 3;
    int stolb = 4;
    int matrix[100][100];

    cout << "Автоматическая матрица: " << endl;

    for (int i = 0; i < strok; i++){
        for(int j = 0; j < stolb; j++){
            matrix[i][j] = rand() % 11 - 5;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Проверка на положительные элементы: " << endl;
    for (int i = 0; i < strok; i++){
        bool vse_polozhit = true;

        for (int j = 0; j < stolb; j++){
            if (matrix[i][j] <= 0){
                vse_polozhit = false;
                break;
            }
        }

        if (vse_polozhit > 0) {
            cout << "Строка " << i + 1 << "Да все положительные " << endl;
        } else {
            cout << "Строка " << i + 1 << "Нет все отрицательные " << endl;
        }
    }
    return 0;
}
