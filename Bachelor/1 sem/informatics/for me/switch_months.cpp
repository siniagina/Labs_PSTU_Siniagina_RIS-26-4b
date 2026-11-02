#include <iostream>
# include <clocale>
using namespace std;

int main () {
    setlocale (LC_ALL, ".65001");

    int month;
    cout << "Введите номер месяца: ";
    cin >> month;

    switch (month)
    {
    case 1:
    case 2:
    case 12:
        cout << "Зима";
        break;
    case 3:
    case 4:
    case 5:
    cout << "Весна";
    break;

    case 6:
    case 7:
    case 8:
    cout << "Лето";
    break;

    case 9:
    cout << "Осень, сентябрь";
    break;

    case 10:
    cout << "Осень, октябрь";
    break;

    case 11:
    cout << "Осень, ноябрь";
    break;
    
    default:
    cout << "Неверый номер месяца";
        break;
    }
return 0;
}