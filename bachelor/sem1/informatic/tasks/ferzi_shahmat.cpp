#include <iostream>
#include <cmath>
#include <locale>
#include <windows.h>
using namespace std;

int doska[8];

bool safe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (doska[i] == col || abs(doska[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

bool solve(int row) {
    if (row == 8) return true;
    for (int col = 0; col < 8; col++) {
        if (safe(row, col)) {
            doska[row] = col;
            if (solve(row + 1)) return true;
        }
    }
    return false;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    if (solve(0)) {
        for (int r = 0; r < 8; r++) {
            for (int c = 0; c < 8; c++) {
                cout << (doska[r] == c ? "Q " : ". ");
            }
            cout << "\n";
        }
    }
    return 0;
}