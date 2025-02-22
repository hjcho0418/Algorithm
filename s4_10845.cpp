#include<iostream> //240715
#include<queue>

using namespace std;
void push(queue<int>& q) {  
    int X;
    cin >> X;
    q.push(X);
}

int pop(queue<int>& q) {
    if (q.empty() == true) {
        return -1;
    }
    else {
        int p = q.front();
        q.pop();
        return p;
    }
}

int size(queue<int>& q) {
    return q.size();
}

int empty(queue<int>& q) {
    if (q.empty() == true) {
        return 1;
    }
    else {
        return 0;
    }
}

int front(queue<int>& q) {
    if (q.empty() == true) {
        return -1;
    }
    else {
        return q.front();
    }
}

int back(queue<int>& q) {
    if (q.empty() == true) {
        return -1;
    }
    else {
        return q.back();
    }
}


int main() {
    int N;
    cin >> N;
    queue<int> Q;

    for (int i = 0; i < N; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            push(Q);
        }
        else if (cmd == "pop")  {
            cout << pop(Q) << "\n";
        }
        else if (cmd == "size") {
            cout << size(Q) << "\n";
        }
        else if (cmd == "empty") {
            cout << empty(Q) << "\n";
        }
        else if (cmd == "front") {
            cout << front(Q) << "\n";
        }
        else if (cmd == "back") {
            cout << back(Q) << "\n";
        }
    }
}