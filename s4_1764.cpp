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

//�ʱ⿡ unordered_set<string> s;�� �ƴ� v1�� ����� ��������� �ð��ʰ� �� ����
//�� ������ �� �ڵ�� v1 ���Ϳ��� �̸��� ã�� ���� find �Լ��� ����ϱ� ������ �ð� ���⵵�� O(NM)�̱� ������/
//�̸� �����ϱ� ���� v1�� set���� ��ȯ�Ͽ� �˻� �ð��� ���̱�� ��.set�� ����ϸ� �̸� �˻��� O(1) �ð��� �ҿ��
//set : ��� ����, ����, �˻��� ��������� O(log N).
//unordered_set : ��� ����, ����, �˻��� ��������� O(1).
//unordered_set�� ���� �߰� ���� �ʿ�

