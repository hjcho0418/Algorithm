#include <iostream> //240809 다이나믹 프로그래밍
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    long long P[101];
    P[0] = 0;
    P[1] = 1;
    P[2] = 1;
    P[3] = 1;

    for (int i = 4; i < 101; i++)
    {
        P[i] = P[i - 2] + P[i - 3];
    }

    while (T--) {
        int N;
        cin >> N;
        cout << P[N] << "\n";
    }

    return 0;
}
