#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

void hanoi5(int n, char from, char to, char aux1, char aux2, char aux3) {
    if (n == 0) return;
    if (n == 1) {
        cout << "Диск 1: " << from << " -> " << to << "\n";
        return;
    }

    int k = (n == 5) ? 2 : (n / 2);

    hanoi5(k, from, aux1, to, aux2, aux3);
    hanoi5(n - k, from, to, aux2, aux3, aux1);
    hanoi5(k, aux1, to, from, aux2, aux3);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n = 5;
    hanoi5(n, 'A', 'E', 'B', 'C', 'D');
    return 0;
}