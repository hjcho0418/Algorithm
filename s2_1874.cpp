#include <iostream> // 240730
#include <vector>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, input, num=1;
	cin >> n;
	stack<int> s;
	vector<char> v;
	bool pos = true;

	for (int i = 0; i < n; i++) {
		cin >> input;

		while (num <= input) {
			s.push(num);
			v.push_back('+');
			num++;
		}

		if (!s.empty() && s.top() == input) {
			s.pop();
			v.push_back('-');
		}

		else {
			pos = false;
		}
	}

	if (!pos) {
		cout << "NO";
	}

	else {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << "\n";
		}
	}

	return 0;
}

