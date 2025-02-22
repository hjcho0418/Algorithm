#include <iostream> //240909 수학 구현  // '0'의 ASCII 값만큼 빼서 해당 숫자의 인덱스에 대응 
#include <string>  // int아닌거 순환할 때 어떤식으로 하는지
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