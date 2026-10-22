#include <iostream>
#include <clocale>
using namespace std;

int main()
{
int a = 1;
switch (a) {
case 1:
a++;
case 2:
a++;
case 3:
++a;
}
cout << "a=" << a;

return 0;
}