#include <iostream> //240910
#include <string>  
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string S, str="abcdefghijklmnopqrstuvwxyz";
	cin >> S;

	for (int i = 0; i < str.length(); i++) {
		cout << (int)S.find(str[i]) << " ";   //���� ã�� ���ڿ��� ���� ��� string::npos�� ��ȯ�Ѵ�. npos�� ���� - 1������ �ڷ����� unsigned�̹Ƿ� int�� ĳ���� �� ����Ѵ�.
	}

	return 0;
}

//���� ���� ���ڿ��� ã���� �� ��쿡�� string::npos�� ��ȯ�ȴ�.
//npos�� ���� - 1�� ���ǵǾ�������, string::npos�� �ڷ����� unsigned�̹Ƿ� 2�� ���� ���信 ���� ǥ���� �� �ִ� �ִ� ũ���� ����� ��µȴ�.
//�̸� �����ϱ� ���ؼ��� unsigned�� �ƴ� �Ϲ� int������ ĳ������ �����Ͽ� ����ϸ� �ȴ�.