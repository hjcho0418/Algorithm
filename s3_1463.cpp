//#include <iostream> 
//
//using namespace std;
//
//int makeOne(int n, int sum) {
//	if (n == 1) {
//		return sum;
//	}
//	
//	else {
//		int a = 1000000, b = 1000000, c = 1000000;
//		int s = sum + 1;
//		
//		if (n % 3 == 0) {
//			a = makeOne((n / 3), s);
//		}
//		if (n % 2 == 0) {
//			b = makeOne((n / 2), s);
//		}
//		c = makeOne((n - 1), s);
//		
//		int minVal = min({ a, b, c });
//
//		return minVal;
//	}
//}
//
//int main() {
//	int N;
//	cin >> N;
//	cout << makeOne(N, 0);
//}


#include <iostream> //�޸������̼� ��� 
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v; // �޸������̼��� ���� �迭

int makeOne(int n) {
    if (n == 1) {
        return 0;
    }

    if (v[n] != -1) {
        return v[n]; // �̹� ���� ���� ������ ��ȯ
    }

    int a = 1000000, b = 1000000, c = 1000000;

    if (n % 3 == 0) {
        a = makeOne(n / 3) + 1;
    }
    if (n % 2 == 0) {
        b = makeOne(n / 2) + 1;
    }
    c = makeOne(n - 1) + 1;

    v[n] = min({ a, b, c }); // ���� ���� ����

    return v[n];
}

int main() {
    int N;
    cin >> N;
    v.resize(N + 1, -1); // �޸������̼� �迭�� -1�� �ʱ�ȭ

    cout << makeOne(N) << endl;
}

//#include <iostream> ����Ƽ
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int N;
//    cin >> N;
//
//    int* dp= new int [(N + 1)];
//
//    dp[1] = 0; // 1�� 1�� ����� �� �ʿ��� ���� Ƚ���� 0
//
//    for (int i = 2; i <= N; i++) {
//        dp[i] = dp[i - 1] + 1; // �⺻������ 1�� �� ��츦 ���
//        if (i % 2 == 0) {
//            dp[i] = min(dp[i], dp[i / 2] + 1); // 2�� ������ ������ ���� ��츦 ���
//        }
//        if (i % 3 == 0) {
//            dp[i] = min(dp[i], dp[i / 3] + 1); // 3���� ������ ������ ���� ��츦 ���
//        }
//    }
//
//    cout << dp[N] << endl; // N�� 1�� ����� �� �ʿ��� �ּڰ��� ���
//    return 0;
//}