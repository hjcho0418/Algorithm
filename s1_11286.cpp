//#include <iostream> //240815 우선순위 큐 // ***구조체 만들기*** // 11286
//#include <queue>
//#include <cmath>
//using namespace std;
//
//struct compare {
//	bool operator()(int a, int b) {
//		if (abs(a) == abs(b))
//			return a > b; // 절댓값이 같다면 원래 값을 비교하여 작은 것을 우선
//		return abs(a) > abs(b); // 절댓값이 작은 것을 우선
//	}
//};
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//	priority_queue<int, vector<int>, compare > pq;
//
//	while (N--) {
//		int x;
//		cin >> x;
//
//		if (x != 0) {
//			pq.push(x);
//		}
//		else {
//			if (!pq.empty()) {
//				cout << pq.top() << "\n";
//				pq.pop();
//			}
//			else {
//				cout << 0 << "\n";
//			}
//		}
//	}
//
//	return 0;
//}

