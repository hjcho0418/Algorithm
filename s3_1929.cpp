#include<iostream> //240720 �����佺�׳׽��� ü �˾ƺ��� 
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