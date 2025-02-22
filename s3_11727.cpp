#include <iostream> //240811 다이나믹 프로그래밍 2n블럭 2번쨰 점화식이용
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int dp[1001];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;

    for (int i = 3; i < 1001; i++)
    {
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007; //i-2에서는 2개를 추가하는 방법이 3가지가있는데 그 중 한가지는 i-1에서 +1한 것과 같으므로
    }

    cout << dp[n];

    return 0;
}