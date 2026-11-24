#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    cout << "Сколько чисел Фибоначчи вывести: ";
    cin >> n;

    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << "\n";
    return 0;
}