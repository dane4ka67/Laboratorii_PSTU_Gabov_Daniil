#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int massiv[10] = {5, 2, 8, 1, 9, 1, 4, 7, 9, 3};
    int n = 10;

    int min_val = massiv[0];
    int max_val = massiv[0];
    int min_index = 0;
    int max_index = 0;
    int min_count = 0;
    int max_count = 0;

    cout << "Массив: ";
    for (int i = 0; i < n; i++)
    {
        cout << massiv[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n; i++)
    {
        if (massiv[i] < min_val)
        {
            min_val = massiv[i];
            min_index = i;
        }
        if (massiv[i] > max_val)
        {
            max_val = massiv[i];
            max_index = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (massiv[i] == min_val) min_count++;
        if (massiv[i] == max_val) max_count++;
    }

    cout << "Минимальный элемент: " << min_val << endl;
    cout << "Минимальный индекс: " << min_index << ", Минимальный номер: " << min_index + 1 << endl;
    cout << "Количество минимальных элементов: " << min_count << endl;

    cout << "Максимальный элемент: " << max_val << endl;
    cout << "Максимальный индекс: " << max_index << ", Максимальный номер: " << max_index + 1 << endl;
    cout << "Количество максимальных элементов: " << max_count << endl;

    return 0;
}

