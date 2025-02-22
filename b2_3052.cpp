#include <iostream> //240908 ¼öÇÐ
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	set<int> s;
	for (int i = 0; i < 10; i++) {
		int N;
		cin >> N;
		s.insert(N % 42);
	}

	cout << s.size();
	return 0;
}