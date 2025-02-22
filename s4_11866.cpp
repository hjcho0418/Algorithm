#include <iostream> //240816 s4_11866 �ڷᱸ�� ť
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
			q.push(q.front());		//	k-1��° ���Ҹ� �� �ڿ� ����
			q.pop();			// 	�� �տ� �ִ� ���Ҵ� ����
		}

		cout << q.front();		//	k��° ���Ұ� �� �տ� ���� ��.
		if (q.size() > 1) {
			cout << ", ";
		}
		q.pop();
	}

	cout << ">";
	return 0;
}