#include<iostream> //240718
#include<stack>

using namespace std;

int main() {
    int k,num,sum=0;
    cin >> k;
    stack<int> s;

    for (int i = 0; i < k; i++) {
        cin >> num;
        if (!s.empty() && num == 0) {
            s.pop();
        }
        else {
            s.push(num);
        }
    }

    while(!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
}