#include<iostream> //240722 
#include <vector>
#include <map>  //최빈값구하는 알고리즘 여러개 찾아보기 + 자료구조 map 알기 
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int N, med=0, mode = 0;
	double mean = 0;
	cin >> N;
	vector<int> v(N);

	//산술평균
	for (int i = 0; i < N; i++) {
		cin >> v[i];
		mean += v[i];
	}
	mean = round(mean / N);
	if (mean == -0) mean = 0;

	//중앙값
	sort(v.begin(), v.end());
	if (N == 1) {
		med = v[0];
	}
	else {
		med = v[(N - 1) / 2];
	}

	//최빈값
	map<int, int> modeFreq;
	int maxFreq = 0;
	for (int i = 0; i < N; i++) {
		modeFreq[v[i]]++;
		if (modeFreq[v[i]] > maxFreq) {
			maxFreq = modeFreq[v[i]];
		}
	}

	vector<int> modeVec;
	for (map<int, int>::iterator it = modeFreq.begin(); it != modeFreq.end(); ++it) {
		if (it->second == maxFreq) {
			modeVec.push_back(it->first);
		}
	}

	sort(modeVec.begin(), modeVec.end());
	if (modeVec.size() == 1) {
		mode = modeVec[0];
	}
	else {
		mode = modeVec[1];
	}

	//범위
	int ran = v[N - 1] - v[0];

	cout << mean << "\n";
	cout << med << "\n";
	cout << mode << "\n";
	cout << ran;
}
