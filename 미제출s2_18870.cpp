//#include <iostream> //240820 해보기
//#include <vector>   
//#include <algorithm>
//#include <set>
//using namespace std;
//
//int main(void) {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N;
//    cin >> N;
//    vector<int> v(N);
//    set<int> s;
//
//    for (int i = 0; i < N; i++) {
//        int num;
//        cin >> num;
//        v[i]= num;
//        s.insert(num);
//    }
//    
//    vector<int> sortedV(s.begin(), s.end());
//
//    for (int i = 0; i < N; i++) {
//        cout << find(sortedV.begin(), sortedV.end(), v[i]) - sortedV.begin()<< " ";
//    }
//
//    return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> v(N);
    map<int, int> m;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    // 중복을 제거하고 정렬된 벡터를 생성합니다.
    vector<int> sortedV(v.begin(), v.end());
    sort(sortedV.begin(), sortedV.end());
    sortedV.erase(unique(sortedV.begin(), sortedV.end()), sortedV.end());

    // 값에서 압축된 인덱스로의 매핑을 생성합니다.
    for (int i = 0; i < sortedV.size(); i++) {
        m[sortedV[i]] = i;
    }

    // 각 원소의 압축된 인덱스를 출력합니다.
    for (int i = 0; i < N; i++) {
        cout << m[v[i]] << " ";
    }

    return 0;
}
// 이거는 map을 좀 더 공부해야할듯
