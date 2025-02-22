#include<iostream> //240716
#include<stack>

using namespace std;
void push(stack<int>& s) {
    int X;
    cin >> X;
    s.push(X);
}

int pop(stack<int>& s) {
    if (s.empty() == true) {
        return -1;
    }
    else {
        int p = s.top();
        s.pop();
        return p;
    }
}

int size(stack<int>& s) {
    return s.size();
}

int empty(stack<int>& s) {
    if (s.empty() == true) {
        return 1;
    }
    else {
        return 0;
    }
}

int top(stack<int>& s) {
    if (s.empty() == true) {
        return -1;
    }
    else {
        return s.top();
    }
}

int main() {
    int N;
    cin >> N;
    stack<int> S;

    for (int i = 0; i < N; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            push(S);
        }
        else if (cmd == "pop") {
            cout << pop(S) << "\n";
        }
        else if (cmd == "size") {
            cout << size(S) << "\n";
        }
        else if (cmd == "empty") {
            cout << empty(S) << "\n";
        }
        else if (cmd == "top") {
            cout << top(S) << "\n";
        }
    }
}