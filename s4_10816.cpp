#include<iostream> // 240714 lower_bound¾Ë±â 
#include<vector>
#include <algorithm>
using namespace std;

void countX(vector<int>& v1, vector<int>& v2) {
    sort(v1.begin(), v1.end());

    for (int i = 0; i < v2.size(); i++) {
        auto lower = lower_bound(v1.begin(), v1.end(), v2[i]); 
        auto upper = upper_bound(v1.begin(), v1.end(), v2[i]);
        cout << (upper - lower) << " ";
    }
}

int main() {
    int N, M;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < A.size(); i++) {
        cin >> A[i];
    }
    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < B.size(); i++) {
        cin >> B[i];
    }
    countX(A, B);
}