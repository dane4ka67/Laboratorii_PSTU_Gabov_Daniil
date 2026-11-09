#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int massiv[7] = {5, 2, 8, 1, 9, 6, 7};
    int n = 7;

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) cout << massiv[i] << " ";
    cout << endl;
    
    for (int shag = n / 2; shag > 0; shag /= 2)
    {
        for (int i = shag; i < n; i+=1)
        {
            int temp = massiv[i];
            int j;

            for (j = i; j >= shag && massiv[j - shag] > temp; j -= shag)
            {
                massiv[j] = massiv[j - shag];
            }
            massiv[j] = temp;
        }
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) cout << massiv[i] << " ";
    cout << endl;

    return 0;
}

