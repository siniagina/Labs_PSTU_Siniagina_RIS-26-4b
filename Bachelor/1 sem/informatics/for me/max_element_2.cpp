#include <iostream>
#include <clocale>
using namespace std;

int main(){
setlocale(LC_ALL, ".65001");

    int N, max, i, x, j, S;
    i = 1;
    j = 1;
    S = 1;
    cin >> N;
    cin >> max;
    for (i = 2; i<=N; ++i){
        cin >> x;
        if(x > max) {
            max = x;
            j = i;
            S = 1;
        }
            else if (max == x) {
                ++S;
            }
        }

    cout <<"max = " << max << " его номер = " << j << " их количество = " << S << endl;
    
    return 0;
}