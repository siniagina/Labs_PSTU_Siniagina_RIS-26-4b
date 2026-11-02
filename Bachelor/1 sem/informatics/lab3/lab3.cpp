#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main() {

    setlocale(LC_ALL, ".65001");

    double a = 0.1;
    double b = 1.0;
    int k = 10;
    int n = 40;
    double e = 0.0001;

    double h = (b - a) / k; //вычисление шага изменения аргумента

    cout << "Вычисление функции" << endl;

        for (int j = 0; j <= k; j++) { //внешний цикл для переменной x от a до b
        double x = a + j * h; //вычисление текущего x с изменением шага

        double SN = 0;

        for (int i = 0; i <= n; i++) { // внутренний цикл для суммы при 40 слагаемых
            double an = pow(-1.0, i) * pow(x, 2 * i + 1) / (2 * i + 1);
            SN += an;
        }

        double SE = 0;
        int i = 0;
        double an;

        do { //внутренний цикл для вычисления суммы при заданной точности
            an = pow(-1.0, i) * pow(x, 2 * i + 1) / (2 * i + 1);
            
          SE += an;
          i++;

        }        while (an >= e || an <= -e);
                        
        double Y = atan(x);

             cout << "X = " << x << " SN = " << SN << " SE = " << SE << " Y = " << Y << endl;
    }

    return 0;
}