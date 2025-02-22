#include <iostream> //240810 다이나믹 프로그래밍 2n블럭 점화식이용
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int dp[1001];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i < 1001; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
 
    cout << dp[n];
    
    return 0;
}