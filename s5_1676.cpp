//#include <iostream>  //240825 ����
//#include <string>    //����->���ڿ� to_string(����) ���ڿ�->���� stoi(���ڿ�)
//using namespace std;
//
//long long factorial(int n) {
//    if (n == 0) {
//        return 1;
//    }
//    else {
//        return n * factorial(n - 1);
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int N, count=0;
//    cin >> N;
//    long long factN = factorial(N);
//    string str = to_string(factN);
//
//    for (int i = (str.length()-1); i >= 0; i--) {
//        if (str[i] == '0') {
//            count++;
//        }
//        else {
//            break;
//        }
//    }
//
//    cout << count;
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, count = 0;
    cin >> N;

    for (int i = 5; i <= N; i *= 5) {
        count += N / i;
    }

    cout << count;
    return 0;
}

//�ڵ尡 �߸��� ������ N!�� ���� ����ϴ� �������� �߻��ϴ� �����÷ο� ���� �����Դϴ�.N!�� �ſ� ū ���� �� �� �ִµ�, Ư�� N = 20 �̻��̸� long long Ÿ�����ε� �� ���� ǥ���ϱ� ��ƽ��ϴ�.�����÷ο찡 �߻��ϸ� ����� �߸��ǰų�, ���α׷��� ����� �������� �ʰ� �˴ϴ�.
//
//�� ������ N!�� ���� �ִ� 0�� ������ ���ϴ� ���̱� ������, N!�� ���� ���� ����� �ʿ䰡 �����ϴ�.��ſ� 0�� �� �� �ִ��� �ľ��ϱ� ���� 2�� 5�� �� �� ���������� ���� ������� ������ �ذ��� �� �ֽ��ϴ�.���� �ִ� 0�� 10�� ������� ������, 10�� 2�� 5�� ������ �̷���� �ֽ��ϴ�.N!���� 2�� ������ ����� �����Ƿ�, 5�� ������ ���� ������ 0�� ������ �� �� �ֽ��ϴ�.
//
//�ڵ带 �����ϸ� ������ �����ϴ� :