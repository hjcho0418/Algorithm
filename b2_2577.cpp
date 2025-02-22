#include <iostream> //240909 ���� ����  // '0'�� ASCII ����ŭ ���� �ش� ������ �ε����� ���� 
#include <string>  // int�ƴѰ� ��ȯ�� �� ������� �ϴ���
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B, C;
	int count[10] = { 0 };

	cin >> A >> B >> C;
	string str = to_string(A * B * C);

	for (char c : str) {
		count[c - '0']++;  
	}

	for (int i = 0; i < 10; i++) {
		cout << count[i] << '\n';
	}

	return 0;
}