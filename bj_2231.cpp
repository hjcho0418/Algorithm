//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//    int N;
//    int M=0,m1=0;
//    cin >> N;
//    if (1 <= N && N <= 18) {
//        for (int i = N - 9; i < N; i++) {
//            string s = to_string(i);
//            int len = s.length();
//            m1 = i;
//            int m2 = 0;
//            for (int j=0 ; j<len;j++) {
//                m2 += s[j]-'0';
//            }
//            if (N==(m1+m2)) {
//                M = i;
//                break;
//            }
//        }
//    }
//    else if (19 <= N && N <= 117) {
//        for (int i = N - 18; i < N; i++) {
//            string s = to_string(i);
//            int len = s.length();
//            m1 = i;
//            int m2 = 0;
//            for (int j = 0; j < len; j++) {
//                m2 += s[j] - '0';
//            }
//            if (N == (m1 + m2)) {
//                M = i;
//                break;
//            }
//        }
//    }
//    else if (118 <= N && N <= 1026) {
//        for (int i = N - 27; i < N; i++) {
//            string s = to_string(i);
//            int len = s.length();
//            m1 = i;
//            int m2 = 0;
//            for (int j = 0; j < len; j++) {
//                m2 += s[j] - '0';
//            }
//            if (N == (m1 + m2)) {
//                M = i;
//                break;
//            }
//        }
//
//    }
//    else if (1027 <= N && N <= 100035) {
//        for (int i = N - 36; i < N; i++) {
//            string s = to_string(i);
//            int len = s.length();
//            m1 = i;
//            int m2 = 0;
//            for (int j = 0; j < len; j++) {
//                m2 += s[j] - '0';
//            }
//            if (N == (m1 + m2)) {
//                M = i;
//                break;
//            }
//        }
//    }
//    else if (10036 <= N && N <= 100044) {
//        for (int i = N - 45; i < N; i++) {
//            string s = to_string(i);
//            int len = s.length();
//            m1 = i;
//            int m2 = 0;
//            for (int j = 0; j < len; j++) {
//                m2 += s[j] - '0';
//            }
//            if (N == (m1 + m2)) {
//                M = i;
//                break;
//            }
//        }
//    }
//    else if (100045 <= N && N <= 1000000) {
//        for (int i = N - 54; i < N; i++) {
//            string s = to_string(i);
//            int len = s.length();
//            m1 = i;
//            int m2 = 0;
//            for (int j = 0; j < len; j++) {
//                m2 += s[j] - '0';
//            }
//            if (N == (m1 + m2)) {
//                M = i;
//                break;
//            }
//        }
//    }
//    cout << M;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    int N;
//    int M = 0; // ���� ���� ������ ���� ������ ����
//    cin >> N;
//
//    // 1���� N-1���� ��� ���� ���� �˻�
//    for (int i = 1; i < N; i++) {
//        int sum = i;
//        int temp = i;
//
//        // �� �ڸ����� ���� ����
//        while (temp > 0) {
//            sum += temp % 10;
//            temp /= 10;
//        }
//
//        // ������ ������ �����ϸ� M�� �����ϰ� ����
//        if (sum == N) {
//            M = i;
//            break;
//        }
//    }
//
//    cout << M;
//    return 0;
//}

#include<iostream>
#include<string>
using namespace std;

int main() {
    int N;
    int M=0,m1=0;
    cin >> N;
    for (int i = 1; i < N; i++) {
        string s = to_string(i);
        int len = s.length();
        m1 = i;
        int m2 = 0;
        for (int j = 0; j < len; j++) {
            m2 += s[j] - '0';
        }
        if (N == (m1 + m2)) {
            M = i;
            break;
        }
    }
 
    cout << M;
}