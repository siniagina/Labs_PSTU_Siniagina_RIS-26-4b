#include <iostream>
#include <clocale>

using namespace std;

int main() {
    int num[7] = {6, 8, 7, 1, 0, 2, 4};
    int n = 7;
    int temp;

    int p = 1;        
    int q = n - 2;    

    for (int i = p; i < (p + q + 1) / 2; i++) {
        temp = num[i];
        num[i] = num[p + q - i];
        num[p + q - i] = temp;
    }

    for (int i = 0; i < n; i++)
        cout << num[i] << " ";
    cout << endl;

    return 0;
}