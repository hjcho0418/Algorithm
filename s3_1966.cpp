#include<iostream> //240721
#include <queue>   // priority_queue <int> q;��������
#include <vector>  // queue<pair<int, int>> q; ���� ����
using namespace std;

int main() {
	int T, N, M, imp;
	cin >> T;

	while (T--) {
		cin >> N >> M;
		queue<pair<int, int>> q;
		priority_queue <int> pq;
		int idx = 0;
		
		for (int i = 0; i < N; i++) {
			cin >> imp;
			q.push({ imp, i });
			pq.push(imp);
		}

		while (!q.empty()) {
			int preImp = q.front().first;
			int preIdx = q.front().second;
			q.pop();
			if (preImp == pq.top()) {
				// ���� ������ ���� �߿䵵�� ���� ���
				pq.pop();
				idx++;
				if (preIdx == M) {
					// M��° ������ �μ�Ǵ� ���
					cout << idx << "\n";
					break;
				}
			}
			else {
				// ���� �������� �߿䵵�� ���� ������ �ִ� ���
				q.push({ preImp, preIdx });
			}
		}
	}
}