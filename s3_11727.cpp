#include <iostream> //240811 ���̳��� ���α׷��� 2n�� 2���� ��ȭ���̿�
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
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007; //i-2������ 2���� �߰��ϴ� ����� 3�������ִµ� �� �� �Ѱ����� i-1���� +1�� �Ͱ� �����Ƿ�
    }

    cout << dp[n];

    return 0;
}