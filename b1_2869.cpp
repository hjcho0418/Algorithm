#include <iostream> //240831 ¼öÇĞ
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, V, day = 0;
	cin >> A >> B >> V;

	day += (V - A) / (A - B);
	if ((V - A) % (A - B) == 0) {
		day++;
	}
	else {
		day += 2;
	}

	cout << day;
	return 0;
}