#include <iostream> //240912 ±¸Çö
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bool findAscending = true;
    bool findDescending = true;
    vector<int> v(8);

    for (int i = 0; i < 8; i++) {
        cin >> v[i];  
    }

    for (int i = 0; i < 7; i++) {
        if (v[i] > v[i + 1]) {
            findAscending = false;
        }
        else if (v[i] < v[i + 1]) {
            findDescending = false;
        }
    }

    if (findAscending) {
        cout << "ascending" << endl;
    }
    else if (findDescending) {
        cout << "descending" << endl;
    }
    else {
        cout << "mixed" << endl;
    }

    return 0;
}
