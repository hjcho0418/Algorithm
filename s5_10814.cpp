#include <iostream> //240824 정렬 // stable_sort 요소 두개가 들어가있을 때 앞에꺼에 맞춰서 정렬하는 법
#include <vector>   //compare으로 기준만들기
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