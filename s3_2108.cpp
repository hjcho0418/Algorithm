#include<iostream> //240722 
#include <vector>
#include <map>  //�ֺ󰪱��ϴ� �˰��� ������ ã�ƺ��� + �ڷᱸ�� map �˱� 
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int N, med=0, mode = 0;
	double mean = 0;
	cin >> N;
	vector<int> v(N);

	//������
	for (int i = 0; i < N; i++) {
		cin >> v[i];
		mean += v[i];
	}
	mean = round(mean / N);
	if (mean == -0) mean = 0;

	//�߾Ӱ�
	sort(v.begin(), v.end());
	if (N == 1) {
		med = v[0];
	}
	else {
		med = v[(N - 1) / 2];
	}

	//�ֺ�
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

	//����
	int ran = v[N - 1] - v[0];

	cout << mean << "\n";
	cout << med << "\n";
	cout << mode << "\n";
	cout << ran;
}
