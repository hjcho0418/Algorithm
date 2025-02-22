#include<iostream>  // 240717
#include <string> //getline(cin, str)�� \n�� �������� ������ �׳� cin�� ����� ����
#include <stack>  //stack���� top�� empty�� ��쿡 ������ ���� ������ �̸� �Ű���ֱ�

using namespace std;
void balanceWorld(const string& s1) {
    stack <char> s2;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == '(' || s1[i] == '[') {
            s2.push(s1[i]);
        }
        else if (s1[i] == ')') {
            if (s2.empty() || s2.top() != '(') {
                cout << "no" << "\n";
                return;
            }
            else {
                s2.pop();
            }
        }
        else if (s1[i] == ']') {
            if (s2.empty() || s2.top() != '[') {
                cout << "no" << "\n";
                return;
            }
            else {
                s2.pop();
            }
        }
    }
    if (s2.empty() != true) {
        cout << "no" << "\n";
    }
    else {
        cout << "yes" << "\n";
    }
}


int main() {
    while (1) {
        string str;
        getline(cin, str);

        if (str == ".") {
            break;
        }

        else {
            balanceWorld(str);
        }
    }
}