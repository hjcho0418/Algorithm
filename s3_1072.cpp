#include<iostream> // 240727 이분탐색 연습3 //scanf,printf // ios_base::sync_with_stdio(false);
#include <algorithm> //cin.tie(nullptr);

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long X,Y;
    cin >> X >> Y;
    long long Z = (100 * Y / X);

    long long low = 0, high = 1000000000, ans = -1;

    while (low <= high) {
        long long mid = (low + high) / 2;

        if ((Y + mid) * 100 / (X + mid) > Z) {
            ans = mid;
            high = mid - 1;
        }

        else {
            low = mid + 1;
        }

    }
    cout << ans;
    return 0;
}