#include<iostream> //240721
#include <queue>   // priority_queue <int> q;오름차순
#include <vector>  // queue<pair<int, int>> q; 페어로 저장
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
				// 현재 문서가 가장 중요도가 높은 경우
				pq.pop();
				idx++;
				if (preIdx == M) {
					// M번째 문서가 인쇄되는 경우
					cout << idx << "\n";
					break;
				}
			}
			else {
				// 현재 문서보다 중요도가 높은 문서가 있는 경우
				q.push({ preImp, preIdx });
			}
		}
	}
}