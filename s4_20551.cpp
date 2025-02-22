#include<iostream> // 240726 이분탐색 연습2 //scanf,printf
#include<vector> // ios_base::sync_with_stdio(false);
#include <algorithm> //cin.tie(nullptr);
using namespace std;

int findIdx(vector<int>& v, int num) {

    int low = 0, high = v.size()-1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (v[mid]==num) {
            ans = mid;
            high = mid - 1;
        }
        
        else if (v[mid] >= num) {
            high = mid - 1;
        }

        else {
           low = mid + 1;
        }

    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, D;
    scanf("%d %d", &N, &M);
    vector<int> A(N);

    for (int i = 0; i < A.size(); i++) {
        scanf("%d", &A[i]);
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < M; i++) {
        scanf("%d", &D);
        printf("%d\n", findIdx(A, D));
    }
}