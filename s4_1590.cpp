#include <iostream> //241003 이분탐색 브루트포스 알고리즘
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /*int N, T, watingTime = -1;
    cin >> N >> T;

    while (N--) {
        int S, I, C;
        cin >> S >> I >> C;

        int mid;
        int first = 0;
        int last = C - 1;
        int compareWT = -1;

        vector<int> v(C);
        for (int i = 0; i < C; i++) {
            v[i] = S;
            S += I;
        }


        while (first <= last) {
            mid = (first + last) / 2;
            if (T > v[mid]) {
                first = mid + 1;
            }
            else {
                compareWT = v[mid] - T;
                last = mid - 1;
            }
        }

        if (watingTime ==-1 && compareWT >= 0) {
            watingTime = compareWT;
        }

        else if (watingTime != -1 && compareWT >= 0) {
            watingTime = min(watingTime, compareWT);
        }
    }

    
    cout << watingTime;*/

    int N, verNum= 0;
    for (int i = 0; i < 5; i++) {
        cin >> N;
        verNum += N * *2;
    }
    cin >> N >> X;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
        if (v[i] < X) {
            cout << v[i] << " ";
        }
    }
    
    return 0;
}