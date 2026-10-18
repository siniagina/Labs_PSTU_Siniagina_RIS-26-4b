#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

    int main () 
    {
    setlocale(LC_ALL, ".65001");

    int a, b, c;
    double x, x1, x2, D;
    
    cout << "Введите значения трех чисел: " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = "; 
    cin >> c;
    
    D = pow(b, 2) - (4 * a * c);
    
    if (D >= 0)
    {
        if (D == 0)
    {
        x = -b / (2 * a);
        cout << "Уравнение имеет один корень: x = " << x << endl;
    }
        else
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        cout << "Уравнение имеет два корня: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
}
    else 
    cout << "Решений нет" << endl;
    
return 0;
}