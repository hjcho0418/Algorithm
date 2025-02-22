#include <iostream> //240810 ���̳��� ���α׷��� 2n�� ��ȭ���̿�
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