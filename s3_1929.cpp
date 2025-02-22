#include<iostream> //240720 에라토스테네스의 체 알아보기 
#include <cmath>
using namespace std;

void prime(int num) {

	if (num < 2) {
		return; 
	}

	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return;
		}
	}
	cout << num << "\n";
}

int main() {
	int M, N;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		prime(i);
	}
}