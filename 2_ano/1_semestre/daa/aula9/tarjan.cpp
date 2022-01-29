#include <bits/stdc++.h>

#define MAX 100

using namespace std;

int n, ind = 1;
bool adj[MAX][MAX], inS[MAX];
int num[MAX], low[MAX];
stack<int> s;
vector<int> cfc;

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
      } else if(inS[i]) {
        low[v] = min(low[v], num[i]);
      }
    }
  }

  if(num[v] == low[v]) {
    cfc.clear();
    int w;
    do {
      w = s.top();
      s.pop();
      inS[v] = false;
      cfc.push_back(w);
    } while (w != v);
    for(int i = 0; i < (int)cfc.size(); i++)
      cout << cfc[i] << " ";
    cout << "\n";
  }
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
    if(num[i] == 0)
      dfs(i);
  }
/*  for(int i = 1; i <= n; i++)
  cout << i << " " << num[i] << " " << low[i] << "\n";*/

  return 0;
}
