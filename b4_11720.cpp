#include <iostream>//240913 ±¸Çö
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, sum=0;
    string str;
    cin >> N >> str;
    
    for (int i = 0; i < N; i++) {
       sum += str[i] - '0';
    }

    cout << sum;
    return 0;
}

