#include<iostream> //240719 erase는 시간을 많이씀 
#include<vector>  // pop_back은 뒤에거 자르는거 (앞에는 없음)
#include<cmath>   // 벡터요소를 begin과 end를 이용해 슬라이싱 할 수 있음
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
