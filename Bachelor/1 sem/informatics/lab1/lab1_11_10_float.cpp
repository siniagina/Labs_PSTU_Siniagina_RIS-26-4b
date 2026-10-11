#include <iostream>
#include <cmath>
using namespace std;
int main() {
      setlocale(LC_ALL, ".65001");
    float a = 100, b = 0.001;
    float c, e, d, f, g, h, i, result; // переменные для промежуточных результатов
    c = pow(a-b, 4);
    cout << "1. (a-b)^4 = " << c << endl; // выводим промежуточный результат, увидеть, где пойдет расхождение
    d = pow(a, 4);
    h = pow(a, 3);
    e = 4*h*b;
    f = 6*a*a*b*b;
    cout << "2. (a^4 - 4a^3b + 6a^2b^2) = " << (d-e+f) << endl;
    cout << "3. (a-b)^4 - (a^4 - 4a^3b + 6a^2b^2) = " << c-(d-e+f) << endl;
    g = pow(b, 4);
    i = 4*a*b*b*b;
    cout << "4. b^4 - 4ab^3 = " << g-i << endl;
    result = (c-(d-e+f))/(g-i);
    cout << "Результат вычисления для переменных типа float" << endl;
    cout << "  (a-b)^4 - (a^4 - 4a^3b + 6a^2b^2)" << endl;
    cout << "  ------------------------------        = " << result << endl;
    cout << "           b^4 - 4ab^3" << endl;
return 0;
}
