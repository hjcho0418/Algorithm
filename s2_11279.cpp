#include <iostream> //240813 우선순위 큐 
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	priority_queue<int, vector<int>> pq; 
	
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