#include <bits/stdc++.h>

#define MAX 100

using namespace std;

int n, ind = 1;
bool adj[MAX][MAX], inS[MAX];
int num[MAX], low[MAX];
stack<int> s;

void dfs(int v) {
  num[v] = low[v] = ind;
  ind++;
  s.push(v);
  inS[v] = true;

  for(int i = 1; i <= n; i++) {
    if(adj[v][i]) {
      if(num[i] == 0) {
        dfs(i);
        low[v] = min(low[v], low[i]);
        if(low[i] >= num[v])
          cout << v << " - ponto de articulacao\n";
      } else if(inS[i]) low[v] = min(low[v], num[i]);
    }
  }
  s.pop();
  inS[v] = false;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int e, a, b;
  cin >> n >> e;

  for(int i = 0; i < e; i++) {
    cin >> a >> b;
    adj[a][b] = adj[b][a] = true;
  }

  dfs(1);

  return 0;
}
