#include <iostream> //240824 ���� // stable_sort ��� �ΰ��� ������ �� �տ����� ���缭 �����ϴ� ��
#include <vector>   //compare���� ���ظ����
#include <algorithm>
#include <string>
using namespace std;

bool comp(pair<int, string> p1, pair<int, string> p2)
{
    return p1.first < p2.first;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    pair<int, string> p;
    vector<pair<int, string>> v;
    for (int i = 0; i < N; i++)
    {
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    stable_sort(v.begin(), v.end(), comp);
    for (int i = 0; i < N; i++)
        cout << v[i].first << " " << v[i].second << "\n";
}