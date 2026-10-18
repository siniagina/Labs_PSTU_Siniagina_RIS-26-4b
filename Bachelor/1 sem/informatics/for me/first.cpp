#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    int N;
    cout << "Введите длину стороны квадрата: ";
    cin >> N;

    for (int i = 0; i < N; i++)
        cout << '*';
    cout << endl;

    for (int i = 0; i < N - 2; i++) {
        cout << '*';
        for (int j = 0; j < N - 2; j++)
            cout << ' ';
        cout << '*' << endl;
    }

    for (int i = 0; i < N; i++)
        cout << '*';
    cout << endl;

    return 0;
}