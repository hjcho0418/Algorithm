#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N,T,P;
    int t = 0, p, p1 = 0;
    vector<int> size(6);
    cin >> N;

    for (int i = 0; i < 6; i++) {
        cin >> size[i];
    }
    cin >> T >> P;
    for (int i = 0; i < 6; i++) {
        if (size[i] % T == 0) {
            t += (size[i] / T);
        }
        else {
            t += (size[i] / T + 1);
        }
    }
    p = N / P;
    p1 = N % P;
    cout << t << endl;
    cout << p << " " << p1;
}