#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void findX(vector<int>& v1, vector<int>& v2) {
    sort(v1.begin(), v1.end());
    for (int i = 0; i < v2.size(); i++) {
        if (binary_search(v1.begin(), v1.end(), v2[i])) { 
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
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
    findX(A, B);
}
//    for (int i = 0; i < v2.size(); i++) {
//        bool X = false;
//        for (int j = 0; j < v1.size(); j++) {
//            if (v2[i] == v1[j]) {
//                cout << 1 << "\n";
//                X = true;
//                break;
//            }
//        }
//        if (!X) {
//            cout << 0 << "\n";
//        }
//    }
//} // v2의 각 요소에 대해 이진 탐색 수행