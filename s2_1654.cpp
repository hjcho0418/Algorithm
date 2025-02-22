#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long  K, N;
	cin >> K >> N;
	vector<long long> v(K);

	for (size_t i = 0; i < v.size(); i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());
    long long ans = 0;
	long long low = 1, high = v[K-1];

	while (low <= high) {
		long long sum = 0,mid = (low + high) / 2;

		for (size_t i = 0; i < v.size(); i++) {
			sum += (v[i] / mid);
		}

		if (sum >= N) {
			ans = mid;
			low = mid + 1;
		}

		else {
			high = mid - 1;
		}
	}
    
	cout << ans;
	return 0;
}

//for (int i = 1; i <= v[0]; i++) {
//	long long sum = 0;
//	for (int j = 0; j < K; j++) {
//		sum += long long((v[j] / i));
//	}
//	if (sum >= N) {
//		s.push(i);	
//	}
//}