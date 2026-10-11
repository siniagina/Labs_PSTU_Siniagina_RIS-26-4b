#include <iostream>
using namespace std;
int a = 2;
int main() {
    {
        int a = 1;
        if (true) {
            int a = 3;
            cout << a << endl;
        }
        cout << a << endl;
        cout << ::a << endl;
    }
    return 0;
}