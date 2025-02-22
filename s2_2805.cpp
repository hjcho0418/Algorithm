#include <iostream> //240814 이분탐색 매개변수탐색
#include <vector>   //밑에는 내꺼인데 이분탐색을 고려하였고 매개변수는 아직 잘 모르겠음
#include <algorithm>  //ㄴmid를 사용한 것이 매개변수를 사용했다는 것임
using namespace std;

long long findHeight(vector<int>& v, int h) {
    long long sum = 0;

    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] > h) {
            sum += v[i] - h;
        }
        else {
            break;
        }
    }

    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> H(N);

    for (int i = 0; i < H.size(); i++) {
        cin >> H[i];
    }
    sort(H.begin(), H.end());

    int low = 1, high = H[N-1], ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (findHeight(H, mid) < M) {
            high = mid - 1;
        }
        else {
            ans = mid;
            low = mid + 1;
        }
    }

    cout << ans;

}