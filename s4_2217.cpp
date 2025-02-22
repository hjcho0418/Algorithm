#include <iostream> 
#include <vector>   //240806 그리디알고리즘
#include <algorithm> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, ans = 0;
    cin >> N;
    vector<int> rope(N);
    for (int i = 0; i < rope.size(); i++) {
        cin >> rope[i];
    }

    sort(rope.begin(), rope.end());
    ans = rope[N - 1];
    //for (int i = N - 2; i >= 0; i--) {
    //    ans = max(ans, (rope[i] * (N - i)));
    //}
    for (int i = N - 2; i >= 0; i--) {
        if (ans < rope[i] * (N - i)) {
            ans = rope[i] * (N - i);
        }
    }


    cout << ans;
    return 0;
}