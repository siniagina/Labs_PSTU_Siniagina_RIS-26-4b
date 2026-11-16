#include <iostream>
#include <clocale>
using namespace std;

int main()
{
     setlocale(LC_ALL, ".65001");
     
    int A[5] = {6, 2, 4, -10, 1};
    int n = 5;
    int k;

    cout << "Введите k: ";
    cin >> k;

    int R;

        for (int i = 1; i <= k; i++) {

         R = A[0];

            for (int j = 0; j < n - 1; j++) {
            A[j] = A[j + 1];
        }

            A[n - 1] = R;
    }

        for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}