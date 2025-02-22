#include<iostream>
#include<vector>
#include <string>

using namespace std;
void findVPS(const string& s1) {
    int countLP = 0, countRP = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == '(') countLP++;
        else if (s1[i] == ')') countRP++;
        if (countRP > countLP) {
            cout << "NO" << "\n";
            return;
        }  
    }
    if (countLP != countRP) {
        cout << "NO" << "\n";
    }
    else {
        cout << "YES" << "\n";
    } 
}

int main() {
    int T;
    cin >> T;
    vector<string> A(T);
    for (int i = 0; i < A.size(); i++) {
        cin >> A[i];
    }
    for (int i = 0; i < A.size(); i++) {
        findVPS(A[i]);
    }
}