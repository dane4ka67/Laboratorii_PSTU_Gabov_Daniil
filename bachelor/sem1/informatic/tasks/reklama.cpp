#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;

struct reklama {
    int shows;
    double clickPercent;
    double avgPerClick;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    reklama ad;

    cout << "Показано объявлений: ";
    cin >> ad.shows;
    cout << "Процент нажатий: ";
    cin >> ad.clickPercent;
    cout << "Средний доход за нажатие: ";
    cin >> ad.avgPerClick;

    double income = ad.shows * ad.clickPercent * ad.avgPerClick;
    cout << "Доход: " << income << "\n";
    return 0;
}