#include <iostream> //240827 ���Ʈ���� �˰���
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	int N, ans = 665;
	cin >> N;

	for (int i = 0; i < N; i++) {
		while (1) {
			ans++;
			str = to_string(ans);
			if (str.find("666") != -1) {
				break;
			}
		}
	}
    cout << ans;
	return 0;
}