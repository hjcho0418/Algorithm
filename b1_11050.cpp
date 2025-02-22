#include <iostream> //240829 수학 조합론
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int ans = factorial(N) / (factorial(K) * factorial(N - K));
    cout << ans;

    return 0;
}
