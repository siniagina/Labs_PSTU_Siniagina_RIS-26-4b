#include <iostream>
#include <clocale>
using namespace std;


int findMax(int n, int m, int a[][100]) {
    int max = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int count = 0;

            for (int k = 0; k < n; k++) {
                for (int l = 0; l < m; l++) {
                    if (a[i][j] == a[k][l]) {
                        count++;
                    }
                }
            }

            if (count > 1 && a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    return max;
}

int main() {

    setlocale(LC_ALL, ".65001");
    int n, m;
    int a[100][100];

    cout << "Введите количество строк и столбцов: ";
    cin >> n >> m;

    cout << "Введите элементы массива:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int result = findMax(n, m, a);

    cout << "Максимальный повторяющийся элемент: " << result;

    return 0;
}