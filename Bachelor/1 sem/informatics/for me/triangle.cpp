#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");
    int a, b, c;

    cout << "Введите стороны треугольника:" << endl;
    cin >> a >> b >> c;

    if (a > 0)
    {
        if (b > 0)
        {
            if (c > 0)
            {
                if (a + b > c)
                {
                    if (a + c > b)
                    {
                        if (b + c > a)
                        {
                            cout << "Треугольник существует" << endl;

                            if (a == b)
                            {
                                if (b == c)
                                {
                                    cout << "Треугольник равносторонний";
                                }
                                else
                                {
                                    cout << "Треугольник равнобедренный";
                                }
                            }
                            else
                            {
                                if (a == c)
                                {
                                    cout << "Треугольник равнобедренный";
                                }
                                else
                                {
                                    if (b == c)
                                    {
                                        cout << "Треугольник равнобедренный";
                                    }
                                    else
                                    {
                                        cout << "Треугольник разносторонний";
                                    }
                                }
                            }
                        }
                        else
                        {
                            cout << "Треугольник не существует";
                        }
                    }
                    else
                    {
                        cout << "Треугольник не существует";
                    }
                }
                else
                {
                    cout << "Треугольник не существует";
                }
            }
            else
            {
                cout << "Треугольник не существует";
            }
        }
        else
        {
            cout << "Треугольник не существует";
        }
    }
    else
    {
        cout << "Треугольник не существует";
    }

    return 0;
}