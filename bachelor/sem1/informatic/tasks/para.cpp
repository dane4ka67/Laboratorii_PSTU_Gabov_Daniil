#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n = 7;
    cout << "Введите количество элементов: " << endl;
    cin >> n;

    if (n % 2 != 0){
        cout << "Нет пар не будет" << endl;
        return 0;
    }

    int pred, now;
    cout << "Введите числа: ";
    cin >> pred;

    bool para = true;

    for(int i = 1; i < n; i++){
        cin >> now;
        if (i % 2 != 0){
            if (now != pred){
                para = false;
            }
        }
        pred = now;
    }
    if (para) {
        cout << "Да числа идут парами " << endl;
    } else {
        cout << "Нет числа не идут парами " << endl;
    }
    return 0;
}





