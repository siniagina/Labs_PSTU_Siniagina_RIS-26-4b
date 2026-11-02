#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    int N, Z;
    cout << "Введите число " << endl;
    cin >> N;
    cout << "Введите искомую цифру " << endl;
    cin >> Z;

    bool F = false;

    while ((N > 0) && !F) {
        if (N % 10 == Z) {
            F = true;
        }

        N = N / 10;
    }

    if (F == true) 
        cout << "Цифра " << Z << " найдена";
    
    else 
        cout << "Цифра " << Z << " не найдена";
    

    return 0;
}