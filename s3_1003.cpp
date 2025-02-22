#include <iostream>  //240822 다이나믹 프로그래밍
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    int dpZero[41];
    dpZero[0] = 1;
    dpZero[1] = 0;

    int dpOne[41];
    dpOne[0] = 0;
    dpOne[1] = 1;

    for (int i = 2; i < 41; i++)
    {
        dpZero[i] = (dpZero[i-1] + dpZero[i-2]);
        dpOne[i] = (dpOne[i-1] + dpOne[i-2]);
    }

    while (T--) {
        int N;
        cin >> N;
        cout << dpZero[N] << " " << dpOne[N]<<"\n";
    }

    return 0;
}

