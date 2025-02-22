#include<iostream> // 240728 이분탐색 연습4 //scanf,printf // ios_base::sync_with_stdio(false);
#include <algorithm> //cin.tie(nullptr);
#include <vector>

using namespace std;

int countBigFair(vector<int>& v1, vector<int>& v2) {
    int ans = 0;
    for (int i = 0; i < v1.size(); i++) {

        int low = 0, high = v2.size() - 1, num = 0;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (v1[i]>v2[mid]) {
                num = mid + 1;
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }
        ans += num;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, N, M;
    cin >> T;

    while (T--) {
        cin >> N >> M;

        vector<int> A(N);
        vector<int> B(M);

        for (int i = 0; i < A.size(); i++) {
            cin >> A[i];
        }

        for (int i = 0; i < B.size(); i++) {
            cin >> B[i];
        }

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        cout << countBigFair(A, B)<<"\n";
    }

    return 0;
}