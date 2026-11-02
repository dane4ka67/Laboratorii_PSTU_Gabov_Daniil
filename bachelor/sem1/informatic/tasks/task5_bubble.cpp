#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[7] = {5, 2, 8, 1, 9, 4, 3};
    int n = 7;

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}