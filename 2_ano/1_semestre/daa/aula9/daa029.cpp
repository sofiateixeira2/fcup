#include <bits/stdc++.h>

#define MAX 27

using namespace std;

list<int> order;
bool visited[MAX];
bool adj[MAX][MAX];
char m[105][15];

void dfs(int v) {
  visited[v] = true;
  for(int i = 0; i < 26; i++) {
    if(!visited[i] && adj[v][i]) dfs(i);
  }
  order.push_front(v);
}

int scompare(string s1, string s2) {
  int size = min(s1.length(), s2.length());
  for(int i = 0; i < size; i++)
    if(s1[i] != s2[i]) return i;

  return -1;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
    cin >> m[i];

  for(int i = 0; i+1 < n; i++) {
    int ind = scompare(m[i], m[i+1]);
    if(ind >= 0)
      adj[m[i][ind] - 'A'][m[i+1][ind] - 'A'] = true;
  }

  for(int i = 0; i < 26; i++) {
    for(int j = 0; j < 26; j++)
      if(!visited[i] && adj[i][j])
        dfs(i);
  }

  for(int i : order)
    cout << (char)('A' + i);
  cout << "\n";

  return 0;
}
