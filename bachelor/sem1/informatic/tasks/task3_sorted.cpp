#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    cout << "Массив: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bool F = false; 
    int i = 0;

    while (i < n - 1 && F == false) 
    {
        if (arr[i] >= arr[i + 1]) 
        {
            F = true;
        i++;
        }
    }

    if (F == false) 
    {
        cout << "Массив упорядочен по возрастанию." << endl;
    } else 
    {
        cout << "Массив НЕ упорядочен по возрастанию." << endl;
    }

    return 0;
}