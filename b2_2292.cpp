#include <iostream> //240901 ¼öÇĞ
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, num = 1, ans = 1;
	cin >> N;

	while (N > num) {
		num += 6 * ans;
	    ans++;
	}

	cout << ans;
	return 0;
}	