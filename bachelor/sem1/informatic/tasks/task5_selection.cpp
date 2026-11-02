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

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}