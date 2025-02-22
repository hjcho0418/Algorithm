#include <iostream> //240812 우선순위 큐 
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
	priority_queue<int, vector<int>, greater<int>> pq; // 작은것부터 하고 싶을 때 greater사용 내림차순이 기본 세팅

	while (N--) {
		int x;
		cin >> x;

		if (x != 0) {
			pq.push(x);
		}
		else {
			if (!pq.empty()) {
				cout << pq.top() << "\n";
				pq.pop();
			}
			else {
				cout << 0 << "\n";
			}
		}
	}

	return 0;
}