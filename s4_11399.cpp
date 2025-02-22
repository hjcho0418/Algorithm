#include<iostream> //240801 그리디 알고리즘
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> P(N);
	for (int i = 0; i < P.size(); i++) {
		cin >> P[i];
	}
	sort(P.begin(), P.end());

	int sum=0, ans = 0;
	for (int i = 0; i < P.size(); i++) {
		sum += P[i];
		ans += sum;
	}
	
	cout << ans;
	return 0;
}