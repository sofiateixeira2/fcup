#include <bits/stdc++.h>

#define WHITE 0
#define GREY 1
#define BLACK 2

#define MAX 100

using namespace std;

int n, flag = 0;
int color[MAX];
bool adj[MAX][MAX];

void dfs(int v) {
  color[v] = GREY;
  for(int i = 1; i <= n; i++) {
    if(adj[v][i]) {
      if(color[i] == GREY)
        flag++;
      else if(color[i] == WHITE)
        dfs(i);
    }
  }
  color[v] = BLACK;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int e, a, b;
  cin >> n >> e;

  for(int i = 0; i < e; i++) {
    cin >> a >> b;
    adj[a][b] = true;
  }

  for(int i = 1; i <= n; i++) {
    if(color[i] == WHITE)
      dfs(i);
  }

  if(flag != 0) cout << "Ciclo encontrado\n";
  else cout << "Sem ciclos\n";

  return 0;
}
