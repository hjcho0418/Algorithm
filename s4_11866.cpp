#include <iostream> //240816 s4_11866 자료구조 큐
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	cin >> N >> K;
	queue<int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	cout << "<";

	while (!q.empty()) {

		for (int i = 1; i < K; i++) {
			q.push(q.front());		//	k-1번째 원소를 맨 뒤에 삽입
			q.pop();			// 	맨 앞에 있던 원소는 삭제
		}

		cout << q.front();		//	k번째 원소가 맨 앞에 오게 됨.
		if (q.size() > 1) {
			cout << ", ";
		}
		q.pop();
	}

	cout << ">";
	return 0;
}