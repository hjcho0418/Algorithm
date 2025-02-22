#include <iostream> //240826 ���� // stable_sort ��� �ΰ��� ������ �� �տ����� ���缭 �����ϴ� ��
#include <vector>   //compare���� ���ظ����
#include <algorithm>
#include <string>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second != p2.second) {
        return p1.second < p2.second;
    }
    else {
        return p1.first < p2.first;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    pair<int, int> p;
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) {
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    stable_sort(v.begin(), v.end(), comp);
    for (int i = 0; i < N; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}