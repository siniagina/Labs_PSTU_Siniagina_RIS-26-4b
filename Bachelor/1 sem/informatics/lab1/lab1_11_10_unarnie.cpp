#include <iostream>
using namespace std;
int main() 
{
      setlocale(LC_ALL, ".65001");
    int n, m, a;
    bool b, c;
    cout << "Введите значения переменных " << endl;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    a = n++-m;
    cout << "Результаты " << endl;
    cout << "n++-m = " << a << endl;
    cout << boolalpha;
    b = m-- >n;
    cout << "m-- >n = " << b << endl;
    c = n-- >m;
    cout << "n-- >m = " << c << endl;
return 0;
}