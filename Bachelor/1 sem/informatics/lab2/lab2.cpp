#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    double F, a, S;
    F = 1;
    S = 0;

    for (int n = 1; n <= 13; ++n) {
        F = F * n;  
        a = log(F) / (n * n);
        S += a;
    }

    cout << "Сумма 13 чисел ряда = " << S << endl;

    return 0;
}
