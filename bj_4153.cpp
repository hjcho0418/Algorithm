#include <iostream>
using namespace std;

int main() {
	while (1) {
		int a, b, c;
		int x = 0;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		if (max(a,c)==a) {
			x = c;
			c = a;
			a = x;
		}
		if (max(b, c) == b) {
			x = c;
			c = b;
			b = x;
		}

		if (c * c == a * a + b * b)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}