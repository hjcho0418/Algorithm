//#include <iostream>   //240905  �ִ�Ȱ�� ����Ƽ����
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

    const int MAX_VALUE = 10000;  // ���� �ִ밪�� 10000�̹Ƿ�
    vector<int> count(MAX_VALUE + 1, 0);  // ī���� �迭 (1���� 10000������ ���ڸ� ī��Ʈ)

    // �Է¹��� ���ڸ� ī����
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    // ī���� �迭�� ���������� ��ȸ�ϸ鼭 ���
    for (int i = 1; i <= MAX_VALUE; i++) {
        while (count[i]--) {  // �ش� ���ڰ� ���� ��ŭ ���
            cout << i << "\n";
        }
    }

    return 0;
}