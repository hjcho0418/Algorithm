#include <iostream> //240817 s2_24479 ±íÀÌ ¿ì¼± Å½»ö ³Êºñ ¿ì¼± Å½»ö Áß ³Êºñ 1
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool isVisited[200000];
int orderVisited[200000];
vector<int> graph[200000];
queue<int> q;
int order = 1;

void dfs(int x) {
    if (isVisited[x]) {
        return;
    }
    isVisited[x] = true;
    orderVisited[x] = order;
    order++;

    sort(graph[x].begin(), graph[x].end());
    for (int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];
        dfs(y);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, R;
    cin >> N >> M >> R;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(R);

    for (int i = 1; i <= N; i++) {
        cout << orderVisited[i] << '\n';
    }
    return 0;
}