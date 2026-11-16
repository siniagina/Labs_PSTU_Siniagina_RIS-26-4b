#include <iostream>
#include <clocale>
using namespace std;

int main(){
setlocale(LC_ALL, ".65001");
int num [7] = {1, 8, 9, 45, 7, 26, 5};
int i;
int n = 7;
int temp;
for (i = 0; i < n-i-1; i++) {
    temp = num[i];
    num [i] = num [n-i-1];
    num [n-i-1] = temp;
    }

    for (i = 0; i < n; i++)
    cout << num[i] << " ";

return 0;
}