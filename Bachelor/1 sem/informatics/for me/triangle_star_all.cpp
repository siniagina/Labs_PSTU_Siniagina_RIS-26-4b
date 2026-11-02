#include <iostream>
#include <clocale>
using namespace std;

int main()
{
     setlocale(LC_ALL, ".65001");

    int i, j, z, p, n;
    cout << "Введите размер стороны треугольника" << endl;
    cin >> n;
    p = n-1;
    z = 1;

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= p; ++j){
        cout << " ";
        }
        
        for (j = 1; j <= z; ++j){
        cout << "*";
        }
        p = p - 1;
        z = z + 1;
        cout << endl;
    }

    

        return 0;
}
