#include <iostream> 
#include <vector>   
#include <algorithm>
#include <cstring>
using namespace std;

bool isVisited[200000];
int depthVisited[200000];
vector<int> graph[200000];

void dfs(int x, int depth) {
    isVisited[x] = true;
    depthVisited[x] = depth;

    sort(graph[x].begin(), graph[x].end());
    for (int i = 0; i < graph[x].size(); i++) {
        int elem = graph[x][i];
        if (!isVisited[elem]) {
            dfs(elem, depth + 1);
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(depthVisited, -1, sizeof(depthVisited));
    int N, M, R;
    cin >> N >> M >> R;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(R, 0);

    for (int i = 1; i <= N; i++) {
        cout << depthVisited[i] << '\n';
    }
    return 0;
}

//240819 깊이 우선 탐색 너비 우선 탐색 중 깊이 3
//c++ 배열 초기화 memeset그리고 그냥 지피티다시읽어봤ㅃ