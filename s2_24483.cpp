#include <iostream> //240821 ±íÀÌ ¿ì¼± Å½»ö ³Êºñ ¿ì¼± Å½»ö Áß ±íÀÌ 5
#include <vector>   
#include <algorithm>
#include <cstring>
using namespace std;

bool isVisited[200000];
int depthVisited[200000];
int orderVisited[200000];
vector<int> graph[200000];
int order = 1;

void dfs(int x, int depth) {
    isVisited[x] = true;
    depthVisited[x] = depth;
    orderVisited[x] = order;
    order++;    

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

    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        if (depthVisited[i] != -1) {
            sum += (long long)depthVisited[i] * orderVisited[i];
        }
    }

    cout << sum;
    return 0;
}