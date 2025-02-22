#include <iostream> //240917 ¼öÇĞ
#include <string> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;
    string a = to_string(A);
    string b = to_string(B);

    cout << A + B + -C << "\n" << stoi(a + b) - C;
    return 0;
}