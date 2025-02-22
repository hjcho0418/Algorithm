//#include <iostream>
//#include <vector>
//using namespace std;
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	vector<vector<int>>a(N, vector<int>(2));
//	for (int i = 0; i < N; i++) {
//		cin >> a[i][0] >> a[i][1];
//	}
//	for (int i = 0; i < (N-1); i++) {
//		for (int j = i+1; j < N; j++) {
//			if (a[i][0] > a[j][0]) {
//				swap(a[i][0], a[j][0]);
//				swap(a[i][1], a[j][1]);
//			}
//			else if (a[i][0] == a[j][0] && a[i][1] > a[j][1]) {
//				swap(a[i][0], a[j][0]);
//				swap(a[i][1], a[j][1]);
//			}
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		cout << a[i][0] << " " << a[i][1] << "\n";
//	}
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> a(N, vector<int>(2));
    for (int i = 0; i < N; i++) {
        cin >> a[i][0] >> a[i][1];
    }

    sort(a.begin(), a.end(), [](const vector<int>& x, const vector<int>& y) {
        if (x[0] == y[0]) {
            return x[1] < y[1]; 
        }
        return x[0] < y[0]; 
        });

    for (int i = 0; i < N; i++) {
        cout << a[i][0] << " " << a[i][1] << "\n";
    }
}
