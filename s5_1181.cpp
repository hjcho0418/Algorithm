#include <iostream> //240824 ���� // 
#include <vector>   // v.erase(unique(v.begin(), v.end()), v.end());�ߺ������ϱ� ���Լ����ư��� �����˱�
#include <algorithm>
#include <string>
using namespace std;

bool comp(string s1, string s2) {
    if (s1.length() == s2.length()) {
        return s1 < s2;
    }
    else {
        return s1.length() < s2.length();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<string> v(N);
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), comp);
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    return 0;
}

//�� �Լ��� ����Ǵ� ������ ���� �����ϰڽ��ϴ�.�� �Լ��� �� ��Ҹ� ���Ͽ� � ������ ��ġ������ �����ϴ� �Լ��Դϴ�.sort �Լ��� ���� �˰����� �� �� �Լ��� �ݺ������� ȣ���ϸ鼭 �迭�̳� ������ ��ҵ��� �����մϴ�.
//
//�� �Լ��� �۵� ����
//�� �Լ� ȣ�� : sort �Լ��� �迭�̳� ������ ��Ҹ� ���� ������ �� �Լ��� ȣ���մϴ�.���� ���, ���Ϳ� "apple"�� "banana"�� ������, comp("apple", "banana")�� ���� ȣ��˴ϴ�.
//
//�� �Լ��� ��� :
//
//��(true) : ù ��° ���ڰ� �� ��° ���ں��� �۴ٰ� �ǴܵǴ� ���, �� ù ��° ���ڰ� �� ��° ���ں��� �տ� �;� �ϴ� ��� true�� ��ȯ�մϴ�.
//����(false) : ù ��° ���ڰ� �� ��° ���ں��� ũ�ٰ� �ǴܵǸ�, �� ù ��° ���ڰ� �� ��° ���ں��� �ڿ� �;� �ϴ� ��� false�� ��ȯ�մϴ�.
//����
//1. comp("apple", "banana")
//���� �� : "apple"�� "banana"�� ���̰� �ٸ��Ƿ� ���̸� ���մϴ�. "apple"�� 5����, "banana"�� 6�����̹Ƿ� "apple"�� �� ª�Ƽ� true�� ��ȯ�մϴ�.���� "apple"�� "banana"���� �տ� �;� �Ѵٰ� �Ǵ��մϴ�.
//2. comp("banana", "apple")
//���� �� : "banana"�� 6����, "apple"�� 5�����Դϴ�.�� ��� "banana"�� �� ��� ������ false�� ��ȯ�մϴ�.���� "banana"�� "apple"���� �ڿ� �;� �Ѵٰ� �Ǵ��մϴ�.
//��ü ���� ���������� ��
//���� v��["apple", "banana"]�� ��� :
//
//sort �Լ��� comp("apple", "banana")�� ȣ���մϴ�.
//����� true�̹Ƿ� "apple"�� "banana"���� �տ� ��ġ�մϴ�.
//���� v��["banana", "apple"]�� ��� :
//
//sort �Լ��� comp("banana", "apple")�� ȣ���մϴ�.
//����� false�̹Ƿ� "banana"�� "apple"���� �ڿ� ��ġ�ϰ� �˴ϴ�.
//�̷��� sort �Լ��� ��� ��ҿ� ���� �� �Լ��� �����Ͽ� ������ �����մϴ�.�ᱹ, �� �Լ��� �� ��� �ֿ� ���� ��� ���� �տ� �;� �ϴ����� �����ϴ� ������ �մϴ�.