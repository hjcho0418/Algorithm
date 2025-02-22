#include <iostream> //240916 ¼öÇÐ
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    string str = "*";

    for (int i = 0; i < N; i++) {
        cout << right << setw(N) << str << "\n";
        str += "*";
    }

    return 0;
}