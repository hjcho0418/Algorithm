#include <iostream>//240914 ±¸Çö
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num, max = 0, order = 0;
	for (int i = 0; i < 9; i++) {
		cin >> num;
		if (num > max) {
			max = num;
			order = i + 1;
		}
	}

	cout << max << "\n" << order;
	return 0;
}