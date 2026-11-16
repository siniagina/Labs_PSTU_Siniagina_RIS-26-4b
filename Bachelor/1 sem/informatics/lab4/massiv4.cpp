#include <iostream>
#include <clocale>
using namespace std;

int main() {
        setlocale(LC_ALL, ".65001");
    const int N = 100;
    int a[N];
    int n, K;

    cout << "Введите количество элементов: ";
    cin >> n;

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Введите номер K: ";
    cin >> K;

    K = K - 1;

    cout << "Массив влево:" << endl; // Вывод массива влево

    int i = K;

    for (int j = 0; j < n; j++) {
        cout << a[i] << " ";
        i = (i - 1 + n) % n;
    }

    a[n] = a[0]; // Добавление первого элемента

    a[n + 1] = a[n - 3]; // Добавление трех последних элементов
    a[n + 2] = a[n - 2];
    a[n + 3] = a[n - 1];

    n = n + 4; // Увеличение длины массива

    cout << "\nМассив вправо:" << endl; // Вывод массива вправо

    i = K;

    for (int j = 0; j < n; j++) {
        cout << a[i] << " ";
        i = (i + 1) % n;
    }

    cout << endl;

    return 0;
}