#include<iostream>
#include<vector>
using namespace std;

//int startW(vector <vector<char>>& v) {
//    int Wcount = 0;
//    for (int i = 0; i < v.size(); ++i) {
//        for (int j = 0; j < v[i].size(); ++j) {
//            if ((i + j) % 2 == 0) {
//                if (v[i][j] != 'W') {
//                    Wcount++;
//                }
//            }
//            else if ((i + j) % 2 != 0) {
//                if (v[i][j] != 'B') {
//                    Wcount++;
//                }
//            }
//        }
//    }
//    return Wcount;
//}
//
//int startB(vector <vector<char>>& v) {
//    int Bcount = 0;
//    for (int i = 0; i < v.size(); ++i) {
//        for (int j = 0; j < v[i].size(); ++j) {
//            if ((i + j) % 2 == 0) {
//                if (v[i][j] != 'B') {
//                    Bcount++;
//                }
//            }
//            else if ((i + j) % 2 != 0) {
//                if (v[i][j] != 'W') {
//                    Bcount++;
//                }
//            }
//        }
//    }
//    return Bcount;
//}

int startW(const vector<vector<char>>& v, int x, int y) {
    int Wcount = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if ((i + j) % 2 == 0) {
                if (v[x + i][y + j] != 'W') {
                    Wcount++;
                }
            }
            else if ((i + j) % 2 != 0) {
                if (v[x + i][y + j] != 'B') {
                    Wcount++;
                }
            }
        }
    }
    return Wcount;
}

int startB(const vector<vector<char>>& v, int x, int y) {
    int Bcount = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if ((i + j) % 2 == 0) {
                if (v[x + i][y + j] != 'B') {
                    Bcount++;
                }
            }
            else if ((i + j) % 2 != 0) {
                if (v[x + i][y + j] != 'W') {
                    Bcount++;
                }
            }
        }
    }
    return Bcount;
}

int main() {
    int N,M;
    cin >> N >> M;
    vector<vector<char>>a(N, vector<char>(M));
    int W = 64, B = 64, num=0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> a[i][j];
        }
    }
 /*   vector<vector<char>>b(8, vector<char>(8));
    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    b[k][l] = a[i][j];
                }
            }
            if (max(W, startW(b)) != W) {
                W = startW(b);
            }
            if (max(B, startB(b)) != W) {
                B = startB(b);
            }
        }
    }*/

    for (int i = 0; i < N - 7; i++) {
        for (int j = 0; j < M - 7; j++) {
            if (min(W, startW(a, i, j)) != W) {
                W = startW(a, i, j);
            }
            if (min(B, startB(a, i, j)) != B) {
                B = startB(a, i, j);
            }
        }
    }
    num = min(W, B);
    cout << num;
}