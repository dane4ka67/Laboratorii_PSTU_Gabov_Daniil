#include <iostream>
#include <cstdarg>
#include <windows.h> 
using namespace std;
int max(int k, ...) {
    va_list ptr;        
    va_start(ptr, k);   
    int min_val = va_arg(ptr, int); 
    for (int i = 1; i < k; i++) {
        int current = va_arg(ptr, int);
        if (current < min_val) {
            min_val = current;
        }
    }
    va_end(ptr); 
    return min_val;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "=== ЗАДАНИЕ 7.2 (Переменное число параметров) ===" << endl;
    cout << "Минимум из 5 чисел:  " << max(5, 10, 2, 35, 4, 8) << endl;
    cout << "Минимум из 10 чисел: " << max(10, 15, 22, 3, 45, 5, -1, 9, 100, 7, 8) << endl;
    cout << "Минимум из 12 чисел: " << max(12, 100, 200, 5, 300, 400, 2, 500, 600, 7, 8, 9, 1) << endl;

    return 0;
}