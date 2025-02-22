#include <iostream>//240915 ¼öÇÐ
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int H, M;
	cin >> H >> M;
	
	if (M >= 45) {
		cout << H << " " << M - 45;
	}
	else if (H!=0) {
		cout << H-1 << " " << M +15;
	}
	else {
		cout << 23 << " " << M + 15;
	}

	return 0;
}