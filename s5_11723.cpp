#include <iostream> //https://rebro.kr/63 
#include <string>   //240804 비트마스크
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, x;
    int S = 0;
    string str = "";

    cin >> M;
    while (M--) {
        cin >> str;
        if (str == "add") {
            cin >> x;
            S |= (1 << x);
        }

        else if (str == "remove") {
            cin >> x;
            S &= ~(1 << x);
        }

        else if (str == "check") {
            cin >> x;
            if (S & (1 << x)) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }

        else if (str == "toggle") {
            cin >> x;
            S ^= (1 << x);
        }

        else if (str == "all") {
            S = (1 << 21) - 1;
        }

        else if (str == "empty") {
            S = 0;
        }
    }

    return 0;
}