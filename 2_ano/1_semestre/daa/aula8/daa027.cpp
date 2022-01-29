#include <bits/stdc++.h>

#define MAX 55

using namespace std;

int nos;
bool adj[MAX][MAX];
bool visited[MAX];
bool f = true;
int colorarr[MAX];

void dfs(int v, int color) {
  visited[v] = true;
  colorarr[v] = color*(-1);
  for(int i = 1; i <= nos; i++) {
    if(visited[i] && colorarr[i] == colorarr[v] && adj[v][i]) {
      f = false;
      return;
    }
    if(!visited[i] && adj[v][i])
      dfs(i, colorarr[v]);

  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  while(n > 0) {

    int e, a, b;
    cin >> nos >> e;

    for(int i = 0; i < e; i++) {
      cin >> a >> b;
      adj[a][b] = adj[b][a] = true;
    }

    dfs(1, -1);

    cout << (f ? "sim" : "nao") << "\n";
    f = true;
    memset(visited, false, sizeof(visited));
    memset(colorarr, 0, sizeof(colorarr));
    memset(adj, false, sizeof(adj));
    n--;

  }

  return 0;
}
