#include <iostream>
#include <windows.h>
using namespace std;
void get_info(int year) {
    int cycle = year % 12;
    string animal;
    switch (cycle) {
        case 0: animal = "Обезьяна"; break;
        case 1: animal = "Петух"; break;
        case 2: animal = "Собака"; break;
        case 3: animal = "Свинья/Кабан"; break;
        case 4: animal = "Крыса"; break; 
        case 5: animal = "Бык"; break;
        case 6: animal = "Тигр"; break;
        case 7: animal = "Кролик/Заяц"; break;
        case 8: animal = "Дракон"; break;
        case 9: animal = "Змея"; break;
        case 10: animal = "Лошадь"; break;
        case 11: animal = "Коза/Овца"; break;
    }
    cout << "Год: " << year << " по старояпонскопу календарю - " << animal << endl;
}

void get_info(string month) {
    for (int i = 0; i < month.length(); i++) {
        month[i] = tolower(month[i]);
    }

    string zodiac;
    if (month == "январь") zodiac = "Козерог/Водолей";
    else if (month == "февраль") zodiac = "Водолей/Рыбы";
    else if (month == "март") zodiac = "Рыбы/Овен";
    else if (month == "апрель") zodiac = "Овен/Телец";
    else if (month == "май") zodiac = "Телец/Близнецы";
    else if (month == "июнь") zodiac = "Близнецы/Рак";
    else if (month == "июль") zodiac = "Рак/Лев";
    else if (month == "август") zodiac = "Лев/Дева";
    else if (month == "сентябрь") zodiac = "Дева/Весы";
    else if (month == "октябрь") zodiac = "Весы/Скорпион";
    else if (month == "ноябрь") zodiac = "Скорпион/Стрелец";
    else if (month == "декабрь") zodiac = "Стрелец/Козерог";
    else zodiac = "Неизвестный";

    cout << "Месяц - " << month << " соответствует знакам Зодиака - " << zodiac << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int year;
    string month;

    cout << "--- Задание А: Старояпонский календарь ---" << endl;
    cout << "Введите год: " << endl;  
    cin >> year;
    get_info(year);
    cout << endl;

    cout << "--- Задание Б: Знак Зодиака ---" << endl;
    cout << "Введите название месяца (например, 'Май'): ";
    cin >> month; 
    get_info(month);
    cout << endl;

    return 0;
}



        
        


