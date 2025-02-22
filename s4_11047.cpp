#include <iostream> 
#include <vector>   //240805 그리디알고리즘
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K, count = 0;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        if (A[i] <= K) {
            count += K / A[i];
            K %= A[i];
        }
    }

    ///*   while (K == 0) {

    //       int low = 0, high = (N - 1), ans = 0;

    //       while (low <= high) {
    //           int mid = (low + high) / 2;

    //           if (A[mid] <= K) {
    //               ans = mid;
    //               low = mid + 1;
    //           }

    //           else {
    //               high = mid - 1;
    //           }
    //       }

    //       K -= A[ans];
    //      */ count++;
    //   }

    cout << count;
    return 0;
}