#include <iostream> //240904 수학, 소수 판정
//#include <vector>
using namespace std;

bool findPrime(int x) {
	if (x < 2) {
		return 0;
	}

	if (x == 2) {
		return 1;
	}

	else {
		for (int i = 2; i < x; i++) {
			if (x % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, count=0;
	cin >> N;
    
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (findPrime(num)) {
			count++;
		}
		
	}
	
	cout << count;
	return 0;
}


//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N, count = 0;
//	cin >> N;
//	vector<int> v(N);
//
//	for (int i = 0; i < v.size(); i++) {
//		cin >> v[i];
//	}
//	for (int i = 0; i < v.size(); i++) {
//		if (findPrime(v[i])) {
//			count++;
//		}
//	}
//	cout << count;
//	return 0;
//}