#include <iostream> //240903 수학 // 그냥 처음부터 문자열로 받았으면 되는구나....
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