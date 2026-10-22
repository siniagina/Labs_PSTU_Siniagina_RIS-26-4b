#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    int N;
    cout << "Введите длину катета: ";
    cin >> N;
    int p = 0;
    int z = N;

    for (int i = 1; i <= N; ++i) {
         for (int j = 1; j <= p; ++j) {     
        cout << ' ';
    }

        for (int j = 1; j <= z; ++j) {
        cout << '*';
        }
        p = p + 1;
        z = z - 1;
        cout << endl;
    }
    return 0;
}