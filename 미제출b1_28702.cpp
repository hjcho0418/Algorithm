#include <iostream> //240903 ¼öÇÐ
#include <string>
#include <algorithm>
using namespace std;

void findPalindrome(int x) {
	string isPd = to_string(x);
	string original = isPd;
	reverse(isPd.begin(), isPd.end());

	if (original == isPd) {
		cout << "yes" << "\n";
	}
	else {
		cout << "no" << "\n";
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	while (1) {
		int N;
		cin >> N;

		if (N != 0) {
			findPalindrome(N);
		}
		else {
			return 0;
		}
	}
}