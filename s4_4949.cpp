#include<iostream>  // 240717
#include <string> //getline(cin, str)은 \n을 기준으로 나눈것 그냥 cin은 띄어쓰기로 나눔
#include <stack>  //stack에서 top은 empty일 경우에 오류가 나기 때문에 이를 신경써주기

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