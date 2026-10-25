#include <iostream>
#include <clocale>
using namespace std;

int main()
{
int a = 10; // инициалиация переменной a
int b = 20; // инициалиация переменной b
int& r = a; // привязка ссылки 
r = b;
r++;
cout << a << "  " << b << endl;

int c = 12;
int* ptr = &c;
int copy = *ptr;
(*ptr)++;
cout << c << "  " << copy << endl;

int e = 4, f = 9; // переменные
int* p = &e; // адрес е
int* q = p; // адрес е
int& R = *p; // ссылка на е, т.е 4
p = &f; // р указывает на f
*q += *p; // 4+9 = 13, т.е. "е" стал 13
*p = R - 3; // р - это f, а R - это ссылка на e, которое теперь 13, 13-3 = 10, теперь f = 13, e = 10
q = p; // оба указателя указывают на f
*q += R; // 13 + 10 = 23
cout << e << " " << f << " " << R << endl;

int h = 5, g = 8;
int& Q = h;
int& s = h;
int copi = h;
Q = g;
s += 2;
g = copi;
cout << h << " " << g << " "
<< Q << " " << s << " " << copi << endl;

int A = 2, B = 5, C = 8;
int* P = &A;
int& H = A;
int COPY = *P;
*P = B;
P = &C;
H = *P;
*P = B + COPY;
P = &B;
*P = H - COPY;
H++;
cout << A << " " << B << " " << C << " " << COPY << endl;

return 0;
}