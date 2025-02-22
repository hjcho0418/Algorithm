#include <iostream> //240830 유클리드 호제법
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}


int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num1, num2;
	cin >> num1 >> num2;

	cout << gcd(num1, num2) << "\n" << lcm(num1, num2);
	return 0;
}

