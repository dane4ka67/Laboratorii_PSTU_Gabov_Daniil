#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int matrix[3][4] = {
        {1, 22, 333, 4444},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    cout << "Исходная матрица: " << endl;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cout << setw(6) << matrix[i][j];
            sum += matrix[i][j];
        }
        cout << " | Сумма: " << sum << endl;
    }
    return 0;
}
    

