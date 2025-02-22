#include<iostream> //240731
#include<string>
#include<vector>
#include<algorithm>
#include <unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	unordered_set<string> s;
	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		s.insert(name);
	}

	vector<string> v;
	for (int i = 0; i < M; i++) {
		string name;
		cin >> name;

		if (s.find(name) != s.end()) {
			v.push_back(name);;
		}
	}
	sort(v.begin(), v.end());

	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

	return 0;
}

//초기에 unordered_set<string> s;가 아닌 v1을 만들어 사용했으나 시간초과 가 나옴
//그 이유는 이 코드는 v1 벡터에서 이름을 찾기 위해 find 함수를 사용하기 때문에 시간 복잡도가 O(NM)이기 때문임/
//이를 개선하기 위해 v1을 set으로 변환하여 검색 시간을 줄이기로 함.set을 사용하면 이름 검색이 O(1) 시간이 소요됌
//set : 요소 삽입, 삭제, 검색이 평균적으로 O(log N).
//unordered_set : 요소 삽입, 삭제, 검색이 평균적으로 O(1).
//unordered_set에 대해 추가 공부 필요

