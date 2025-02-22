#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int N, n;
    vector <int> num;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> n;
        num.push_back(n);
        
    }
    sort(num.begin(), num.end());
    for (int i = 0; i < N; i++) {
        cout << num[i] << "\n";
    }
}