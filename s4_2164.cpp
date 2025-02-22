#include<iostream>
#include<queue>

using namespace std;
void findNum(queue<int>& q) {
    while (q.size() > 2) {
        q.pop(); 
        int temp = q.front();
        q.pop(); 
        q.push(temp); 
    }
    if (q.size() == 2) {
        q.pop();
        cout << q.front();
    }
    else {
        cout << q.front();
    }
    
}


int main() {
    int N;
    cin >> N;
    queue<int> Q;
    for (int i = 1; i <= N; i++) {
        Q.push(i);
    }
    findNum(Q);
}