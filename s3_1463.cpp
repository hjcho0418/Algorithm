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


#include <iostream> //메모이제이션 사용 
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v; // 메모이제이션을 위한 배열

int makeOne(int n) {
    if (n == 1) {
        return 0;
    }

    if (v[n] != -1) {
        return v[n]; // 이미 계산된 값이 있으면 반환
    }

    int a = 1000000, b = 1000000, c = 1000000;

    if (n % 3 == 0) {
        a = makeOne(n / 3) + 1;
    }
    if (n % 2 == 0) {
        b = makeOne(n / 2) + 1;
    }
    c = makeOne(n - 1) + 1;

    v[n] = min({ a, b, c }); // 계산된 값을 저장

    return v[n];
}

int main() {
    int N;
    cin >> N;
    v.resize(N + 1, -1); // 메모이제이션 배열을 -1로 초기화

    cout << makeOne(N) << endl;
}

//#include <iostream> 지피티
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int N;
//    cin >> N;
//
//    int* dp= new int [(N + 1)];
//
//    dp[1] = 0; // 1을 1로 만드는 데 필요한 연산 횟수는 0
//
//    for (int i = 2; i <= N; i++) {
//        dp[i] = dp[i - 1] + 1; // 기본적으로 1을 뺀 경우를 계산
//        if (i % 2 == 0) {
//            dp[i] = min(dp[i], dp[i / 2] + 1); // 2로 나누어 떨어질 때의 경우를 계산
//        }
//        if (i % 3 == 0) {
//            dp[i] = min(dp[i], dp[i / 3] + 1); // 3으로 나누어 떨어질 때의 경우를 계산
//        }
//    }
//
//    cout << dp[N] << endl; // N을 1로 만드는 데 필요한 최솟값을 출력
//    return 0;
//}