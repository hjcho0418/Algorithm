#include <iostream> //240918 ¼öÇÐ
#include <string> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int score = 0, straight = 0;
        string str;
        cin >> str;

        for (auto& ch : str) {
            if (ch == 'O') {
                straight++;
            }
            else {
                straight = 0;
            }
            score += straight;
        }

        cout << score << "\n";
    }
    return 0;
}