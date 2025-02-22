#include <iostream> //240902 ¼öÇÐ 
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	vector<float> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

    sort(v.begin(), v.end());
	float M = v[N - 1];
	for (int i = 0; i < N; i++) {
		v[i] = v[i] / M * 100;
	}

	float newAvg = accumulate(v.begin(), v.end(), 0.0) / v.size();

	cout << newAvg;
	return 0;
}