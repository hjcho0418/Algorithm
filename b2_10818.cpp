#include <iostream> //240911 ¼öÇÐ
#include <vector> 
#include <algorithm> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	vector<int> v(N);
	
	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	cout << v[0] << " " << v[N - 1];
	return 0;
}