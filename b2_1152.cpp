#include <iostream> //240907 ���� ���ڿ�
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0;

	getline(cin, str);
	if (str[0] == ' ') {
		count--;
	}

	if (str[str.length() - 1] == ' ') {
		count--;
	}

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
			count++;
	}

	cout << count + 1;
	return 0;
}