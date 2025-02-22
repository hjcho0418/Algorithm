//#include <iostream>   //240905  최댓값활용 지피티참고
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N;
//    cin >> N;
//    vector<int> v(N);
//
//    for (int i = 0; i < v.size(); i++) {
//        cin >> v[i];
//    }
//
//    sort(v.begin(), v.end());
//    for (int i = 0; i < v.size(); i++) {
//        cout << v[i]<<"\n";
//    }
//    return 0;
//}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    const int MAX_VALUE = 10000;  // 수의 최대값이 10000이므로
    vector<int> count(MAX_VALUE + 1, 0);  // 카운팅 배열 (1부터 10000까지의 숫자를 카운트)

    // 입력받은 숫자를 카운팅
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    // 카운팅 배열을 순차적으로 순회하면서 출력
    for (int i = 1; i <= MAX_VALUE; i++) {
        while (count[i]--) {  // 해당 숫자가 나온 만큼 출력
            cout << i << "\n";
        }
    }

    return 0;
}