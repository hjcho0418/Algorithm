#include <iostream> //240828 브루트포스 알고리즘
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	pair<int, int> p;
	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++) {
		cin >> p.first >> p.second;
		v.push_back(p);
	}

	for (int i = 0; i < N; i++) {
		int rank = 1;
		for (int j = 0; j < N; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second) {
				rank++;
			}
		}
		cout << rank << endl;
	}

	return 0;
}