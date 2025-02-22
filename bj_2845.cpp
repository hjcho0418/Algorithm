#include <iostream>
using namespace std;
int main() {
	int L, P, N1 ,N2 ,N3 ,N4, N5;
	cin >> L >> P;
	cin >> N1 >> N2 >> N3 >> N4 >> N5;
	if (1 <= L && L <= 10 && 1 <= P && P <= 1000) {
		cout << (N1 - L * P) << " " << (N2 - L * P) << " " << (N3 - L * P) << " " << (N4 - L * P) << " " << (N5 - L * P);
	}
}