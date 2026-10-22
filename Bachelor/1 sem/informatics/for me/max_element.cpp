#include <iostream>
#include <clocale>
using namespace std;

int main(){
setlocale(LC_ALL, ".65001");

    int N, max, i, x, j;
    i = 1;
    j = 1;
    cin >> N;
    cin >> max;
    for (i = 2; i<=N; ++i){
        cin >> x;
        if(x > max){
            max = x;
            j = i;
        }
            }

    cout <<"max = " << max << " его номер = " << j << endl;
    
    return 0;
}
