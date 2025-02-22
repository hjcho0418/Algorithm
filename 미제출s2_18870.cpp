//#include <iostream> //240820 �غ���
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

    // �ߺ��� �����ϰ� ���ĵ� ���͸� �����մϴ�.
    vector<int> sortedV(v.begin(), v.end());
    sort(sortedV.begin(), sortedV.end());
    sortedV.erase(unique(sortedV.begin(), sortedV.end()), sortedV.end());

    // ������ ����� �ε������� ������ �����մϴ�.
    for (int i = 0; i < sortedV.size(); i++) {
        m[sortedV[i]] = i;
    }

    // �� ������ ����� �ε����� ����մϴ�.
    for (int i = 0; i < N; i++) {
        cout << m[v[i]] << " ";
    }

    return 0;
}
// �̰Ŵ� map�� �� �� �����ؾ��ҵ�
