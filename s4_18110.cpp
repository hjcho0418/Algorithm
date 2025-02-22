#include<iostream> //240719 erase�� �ð��� ���̾� 
#include<vector>  // pop_back�� �ڿ��� �ڸ��°� (�տ��� ����)
#include<cmath>   // ���Ϳ�Ҹ� begin�� end�� �̿��� �����̽� �� �� ����
#include<algorithm>
#include <numeric>

using namespace std;

int diff(vector<int> &v) {
	float rate = v.size() / 100.0 * 15.0;
	int Rrate = round(rate);
	sort(v.begin(), v.end());

	/*for (int i = 0; i < Rrate; i++) {
		v.erase(v.begin());
		v.pop_back();
	}*/

	vector<int> v1(v.begin() + Rrate, v.end() - Rrate);

	float level = accumulate(v1.begin(), v1.end(), 0.0) / v1.size();
	int Rlevel = round(level);

	return Rlevel;
}

int main() {
	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}

	else {
		vector<int> opi(n);
		for (int i = 0; i < opi.size(); i++) {
			cin >> opi[i];
		}
		cout << diff(opi);
	}
}
