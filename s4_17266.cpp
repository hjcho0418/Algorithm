#include<iostream> // 240725 이분탐색 연습1 
#include<vector>
#include <algorithm>
using namespace std;

bool findHeight(int n, int m, vector<int>& x, int h) {

    if (x[0] > h || (n - x[m - 1]) > h) {
        return 0;
    }

    for (int i = 1; i < m; ++i) {
        if ((x[i] - x[i - 1]) > 2 * h) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> x(M);

    for (int i = 0; i < x.size(); i++) {
        cin >> x[i];
    }
  
    int low = 1, high = N, ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (!findHeight(N, M, x, mid)) {
            low = mid + 1;
        }
        else {
            ans = mid;
            high = mid - 1;
        }
    }

    cout << ans;

}